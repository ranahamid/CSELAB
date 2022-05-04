using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class userArea : System.Web.UI.Page
{
    static string conn = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(conn);

    
    protected void Page_Load(object sender, EventArgs e)
    {
        msg_label.Text = (string)Session["msg"];
        cn.Open();

    }
    protected void AddContactButton1_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != null)
            Response.Redirect("~/add.aspx");
        else
        {
            Session["msg"] = "Log in first.";
            Response.Redirect("~/login.aspx");
        }
    }


    protected void BrowseAllContactButton_Click(object sender, EventArgs e)
    {
        string user_id =(string) Session["user_id"];
        if (user_id != null)
            Response.Redirect("~/all.aspx");
        else
        {
            Session["msg"] = "Log in first.";
            Response.Redirect("~/login.aspx");
        }
    }


    protected void HomeButton3_Click(object sender, EventArgs e)
    {
        Response.Redirect("~/default.aspx");
    }
    protected void LogoutButton4_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != null)
        {
            Session["user_id"] = null;
            Session["msg"] = "Log out successfully";
            Response.Redirect("~/default.aspx");
        }
        else
        {
            Session["msg"] = "You are not logged in";
            Response.Redirect("~/default.aspx");
        }
    }
    protected void DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        msg_label.Text = "Enter value for " + DropDownList1.SelectedItem.ToString();
    }
    protected void SubmitButton1_Click(object sender, EventArgs e)
    {
        //search;
        if (IsValid)
        {
            string value = SearchValueTextBox1.Text;
            string field = DropDownList1.SelectedItem.Text;
            Response.Write(field);

            string c="";
            string user_id=(string) Session["user_id"];


            if (field == "fullName")
            {
                c = "SELECT fullName, nickName, address, dateOfBirth, phoneNumber FROM  contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id where (contactTable.user_id=@user_id and fullName=@name)";
            }

            if (field == "nickName")
            {
                c = "SELECT fullName, nickName, address, dateOfBirth, phoneNumber FROM  contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id where (user_id=@user_id and nickName=@name)";
            }

            if (field == "phoneNumber")
            {
                c = "SELECT fullName, nickName, address, dateOfBirth, phoneNumber FROM  contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id where (user_id=@user_id and phoneNumber=@name)";
            }

            if (field == "address")
            {
                c = "SELECT fullName, nickName, address, dateOfBirth, phoneNumber FROM  contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id where (user_id=@user_id and address=@name)";
            }

            SqlCommand cmd = new SqlCommand(c, cn);
            cmd.Parameters.Add("user_id",user_id);
            cmd.Parameters.Add("name", value);
            
            SqlDataReader reader= cmd.ExecuteReader();
            GridView1.DataSource = reader;
            GridView1.DataBind();

            msg_label.Text = "search complete.";

        }
    }
}