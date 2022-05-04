using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;

public partial class Details : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);
    string contacts_id;


    protected void Page_Load(object sender, EventArgs e)
    {
        if (Session["user_id"] == null)
            Response.Redirect("~/login.aspx");
        
        cn.Open();
          if (!IsPostBack)
        {
            string contact_id = "";
            contact_id = Request.QueryString["id"];
            
            
              /*  
                string user_id = (string)Session["user_id"];
                string c = "SELECT Contacts_Table.Contact_id, Contacts_Table.FullName, Contacts_Table.NickName, Contacts_Table.DateOfBirth, Contacts_Table.WebAddress, Contacts_Table.Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2 and Contacts_Table.contact_id=@contact_id)";
                

                SqlCommand cmd = new SqlCommand(c, cn);

                cmd.Parameters.AddWithValue("User_id2", user_id);
                cmd.Parameters.AddWithValue("contact_id", contact_id);

                SqlDataReader reader = cmd.ExecuteReader();


                string birthday="",full_name="",nick_name="",web_address="",address="";
                while (reader.Read())
                {
                    full_name = reader["FullName"].ToString();
                    nick_name = reader["NickName"].ToString();
                    web_address = reader["WebAddress"].ToString();
                    address = reader["Address"].ToString();
                    birthday = reader["DateOfBirth"].ToString();
                }//end of while
                reader.Close();

                string cc = "SELECT PhoneNumber FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2 and Contacts_Table.contact_id=@contact_id)";
                
                SqlCommand cmd2 = new SqlCommand(cc, cn);

                cmd2.Parameters.AddWithValue("User_id2", user_id);
                cmd2.Parameters.AddWithValue("contact_id", contact_id);
                
               
                reader = cmd2.ExecuteReader();
                string phone_number = "";
                while (reader.Read())
                {
                    phone_number = phone_number+reader["PhoneNumber"].ToString() + "<br />";
                }
                reader.Close();
                details_Label1.Text = "Full Name: " + full_name + "<br />" + "Nick Name: " + nick_name + "<br />" +
                                       "Date of Birth : " + birthday + "<br />" + "Web Addrss: " + web_address + "<br />" +
                                       "Address : " + address + "<br />"
                                       + "Phone Number : " + phone_number + "<br />";
            */
        }
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
    protected void MyUserArea_Button2_Click(object sender, EventArgs e)
    {

        Response.Redirect("UserArea.aspx");
    }
    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }
}