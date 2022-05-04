using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;
using System.Text;


public partial class AdminArea : System.Web.UI.Page
{

    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        
        if (Session["user_id"] == null)
            Response.Redirect("~/Default.aspx");
        cn.Open();
      
    }



    
    protected void end_Calendar2_DayRender(object sender, DayRenderEventArgs e)
    {
        /*
          DateTime start = start_Calendar1.SelectedDate;
          DateTime end = end_Calendar2.SelectedDate;
       
         
         if (e.Day.Date.Year < 2014)
          {
              e.Day.IsSelectable = false;
             e.Cell.BackColor = System.Drawing.Color.Cyan;
          }
         */



    }
     


    protected void Poll_Create_Button1_Click(object sender, EventArgs e)
    {
        string poll_name = Poll_name_TextBox1.Text;
        string poll_option1 = Poll_optin1_TextBox2.Text;
        string poll_option2 = Poll_optin2_TextBox3.Text;
        string poll_option3 = Poll_optin3_TextBox4.Text;

        DateTime start_time = start_Calendar1.SelectedDate;
        DateTime end_time = end_Calendar2.SelectedDate;

        string userID = (string)Session["user_id"];

        //insert poll
        string c = "Insert into poll_table  values ( @poll_name,@start_time,@end_time)";

        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("poll_name", poll_name);
        cmd.Parameters.Add("start_time", start_time);
        cmd.Parameters.Add("end_time", end_time);

        cmd.ExecuteNonQuery();

        //insert poll_option

        string c2 = "select max(poll_id) from poll_table";
        SqlCommand cmd3 = new SqlCommand(c2, cn);
        string poll_id = cmd3.ExecuteScalar().ToString();


       


        string count = "0";

        string cc = "Insert into poll_option_table  values ( @poll_id,@option_name,@count)";
        SqlCommand cmd2 = new SqlCommand(cc, cn);
        cmd2.Parameters.Add("poll_id", poll_id);
        cmd2.Parameters.Add("count", count);
        cmd2.Parameters.Add("option_name", poll_option1);
        cmd2.ExecuteNonQuery();

        string cc1 = "Insert into poll_option_table  values ( @poll_id,@option_name,@count)";
        SqlCommand cmd21 = new SqlCommand(cc1, cn);
        cmd21.Parameters.Add("poll_id", poll_id);
        cmd21.Parameters.Add("count", count);
        cmd21.Parameters.Add("option_name", poll_option2);
        cmd21.ExecuteNonQuery();


        string cc3 = "Insert into poll_option_table  values ( @poll_id,@option_name,@count)";
        SqlCommand cmd23 = new SqlCommand(cc3, cn);
        cmd23.Parameters.Add("poll_id", poll_id);
        cmd23.Parameters.Add("count", count);
        cmd23.Parameters.Add("option_name", poll_option3);
        cmd23.ExecuteNonQuery();
        
        //
        Msg_Label1.Text = "Poll created successfully.";
           


    }
  


    protected void LinkButton2_Click(object sender, EventArgs e)
    {
        //delete
        LinkButton l = (LinkButton)sender;
        String poll_id = l.CommandArgument;
         // Msg_Label1.Text = "Poll ID: " + poll_id;


        string c = "delete from poll_Table where poll_id=@poll_id ";

        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("poll_id ", poll_id);
        cmd.ExecuteNonQuery();


        string cc = "delete from poll_option_Table where poll_id=@poll_id ";

        SqlCommand cmd2 = new SqlCommand(cc, cn);
        cmd2.Parameters.Add("poll_id ", poll_id);
        cmd2.ExecuteNonQuery();
        Msg_Label1.Text = "Deleted successfully";

    }
    protected void LinkButton3_Click(object sender, EventArgs e)
    {
        //details

        LinkButton l = (LinkButton)sender;
        String poll_id = l.CommandArgument;
     //   Msg_Label1.Text = "Poll ID: " + poll_id;
         Response.Redirect("~/Details.aspx?poll_id=" + poll_id);
    }

    protected void Page_PreRenderComplete(object sender, EventArgs e)
    {
        GridView1.DataBind();

    }
    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }


    protected void update_Button_Click(object sender, EventArgs e)
    {
       
    }



    
    protected void LinkButton4_Click1(object sender, EventArgs e)
    {
        Msg_Label2.Text = "Update section.";
        //update

        Msg_Label2.Text = "Update section.";
        //update


        LinkButton l = (LinkButton)sender;
        String poll_id = l.CommandArgument;


        //start date
        string c2 = "select start_time from poll_table where poll_id=@poll_id";
        SqlCommand cmd3 = new SqlCommand(c2, cn);
        cmd3.Parameters.AddWithValue("poll_id", poll_id);

        string start_date = cmd3.ExecuteScalar().ToString();
        //end date
        DateTime start = Convert.ToDateTime(start_date);

        string c3 = "select end_time from poll_table where poll_id=@poll_id";
        SqlCommand cmd4 = new SqlCommand(c3, cn);
        cmd4.Parameters.AddWithValue("poll_id", poll_id);

        string end_date = cmd4.ExecuteScalar().ToString();
        DateTime end = Convert.ToDateTime(end_date);


        DateTime current = DateTime.Now;



        if (start <= current && current <= end)
        {
            Session["validDate"] = "present";

            Msg_Label2.Text = "The Poll is going on.";
        }
        else if (start > current)
        {

            Session["validDate"] = "future";
            Response.Redirect("~/Update.aspx?poll_id=" + poll_id);
        }
        else
        {
            //calculate Results
            Session["validDate"] = "past";
            Msg_Label2.Text = "The Poll was end.";
        }
        //end of update
    }
}