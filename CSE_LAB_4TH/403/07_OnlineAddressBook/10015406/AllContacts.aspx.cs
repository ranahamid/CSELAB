using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Text;
using System.Data.SqlClient;
public partial class AllContacts : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);
    protected void Page_Load(object sender, EventArgs e)
    {
        if (Session["user_id"] == null)
            Response.Redirect("~/login.aspx");

        cn.Open();
        
        string user_ID = (string)Session["user_id"];
        if (user_ID != null)
        {
            string user_NAME = (string)Session["user_name"];
            Message_Label.Text = "Welcome " + user_NAME + ".";
            Contacts_msg_Label1.Text = "Your Contacts are:-";
        }
        else
        {
            Message_Label.Text = "Please Log in first.";
        }
        

    }



    protected void Page_PreRenderComplete(object sender, EventArgs e)
    {
        GridView1.DataBind();
       
    }


    protected void MyUserArea_Button2_Click(object sender, EventArgs e)
    {
        Response.Redirect("UserArea.aspx");

    }


    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        string user_ID = (string)Session["user_id"];
        if (user_ID == null || user_ID == "")
        {
            Session["msg"] = "Please log in.";
        }
        else
        {
            Session["msg"] = "You are logged in.";
        }
        Response.Redirect("Default.aspx");
    }


    protected void Edit_LinkButton1_Click(object sender, EventArgs e)
    {
        //edit
        LinkButton l = (LinkButton)sender;
        String contact_id = l.CommandArgument;

        Response.Redirect("~/UpdateContact.aspx?id=" + contact_id);
      
    }

    protected void Delete_LinkButton1_Click(object sender, EventArgs e)
    {
      
        //delete
        LinkButton l = (LinkButton)sender;
        String contact_id = l.CommandArgument;

       

        // string c = "delete from Student_Table where ID='" + Convert.ToInt32(id).ToString() + "'";

        string c = "delete from Contacts_Table where Contact_id=@contact_id ";

        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("contact_id ", contact_id);
        cmd.ExecuteNonQuery();


        string cc = "delete from PhoneNumber_Table where Contact_id=@contact_id ";

        SqlCommand cmd2 = new SqlCommand(cc, cn);
        cmd2.Parameters.Add("contact_id ", contact_id);
        cmd2.ExecuteNonQuery();
        Contacts_msg_Label1.Text = "Deleted successfully";
    }


    protected void ExportCsv_Button2_Click(object sender, EventArgs e)
    {
        //csv
       
        Response.Clear();
     //   Response.Buffer = true;
        Response.AddHeader("content-disposition", "attachment;filename=GridViewtoCSVExport.csv");
      //  Response.Charset = string.Empty;
        Response.ContentType = "application/text";

       // GridView1.AllowPaging = false;
       // GridView1.DataBind();

        StringBuilder stringBuilder = new StringBuilder();
        for (int index = 0; index < GridView1.Columns.Count; index++)
        {
            //add separator
            stringBuilder.Append(GridView1.Columns[index].HeaderText + ',');
        }
        //append new line
        stringBuilder.Append("\n");

        for (int index = 0; index < GridView1.Rows.Count; index++)
        {
            for (int index2 = 0; index2 < GridView1.Columns.Count; index2++)
            {
                //add separator
                stringBuilder.Append(GridView1.Rows[index].Cells[index2].Text + ',');
            }
            //append new line
            stringBuilder.Append("\n");
        }

        Response.Output.Write(stringBuilder.ToString());
        Response.Flush();
        Response.End();
    }
    protected void Details_LinkButton1_Click(object sender, EventArgs e)
    {
        //details
        string user_ID = (string)Session["user_id"];
        if (user_ID == null || user_ID == "")
        {
            Session["msg"] = "Please log in.";
            Response.Redirect("login.aspx");
        }
        else
        {
            LinkButton l = (LinkButton)sender;
            String contact_id = l.CommandArgument;
            Response.Redirect("~/Details.aspx?id=" + contact_id);
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