using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class UserArea : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        if (Session["user_id"] == null)
            Response.Redirect("~/Default.aspx");
        cn.Open();
    }



    protected void LinkButton1_Click(object sender, EventArgs e)
    {
        //cast vote
        LinkButton l = (LinkButton)sender;
        String poll_id = l.CommandArgument;
     //   Response.Redirect("~/CastVote.aspx?poll_id=" + poll_id);

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
            Response.Redirect("~/CastVote.aspx?poll_id=" + poll_id);
        }
        else if (start > current)
        {
            Msg_Label1.Text = "The Poll is coming soon.";
            Session["validDate"] = "future";
        }
        else
        {
            //calculate Results
            Session["validDate"] = "past";

            Msg_Label1.Text = "The Poll was end.";
        }
        //end of cast

    }



    protected void LinkButton2_Click(object sender, EventArgs e)
    {
        //view results
        LinkButton l = (LinkButton)sender;
        String poll_id = l.CommandArgument;

        //start date
        string c2 = "select start_time from poll_table where poll_id=@poll_id";
        SqlCommand cmd3 = new SqlCommand(c2, cn);
        cmd3.Parameters.AddWithValue("poll_id",poll_id);

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
            Msg_Label1.Text = "The Poll is ongoing.";
        }
        else if (start > current)
        {
            Msg_Label1.Text = "The Poll is coming soon.";
            Session["validDate"] = "future";
        }
        else
        {
            //calculate Results
            Session["validDate"] = "past";
            Response.Redirect("~/ViewResults.aspx?poll_id=" + poll_id);
        }
        

    }



    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }
}