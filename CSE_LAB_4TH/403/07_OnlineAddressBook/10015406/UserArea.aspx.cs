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
            Response.Redirect("~/login.aspx");


        cn.Open();
        search_option_Label.Text = "Enter " + seachField_DropDownList1.SelectedItem.Text;
    }
    protected void addContacts_Button3_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != "" && user_id != null)
        {

            Response.Redirect("AddContacts.aspx");
        }
        else
        {
            Session["msg"] = "Log in first to Add Contacts";
            Response.Redirect("Login.aspx");
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
    protected void browseallcontacts_Button2_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != "" && user_id != null)
        {
            Response.Redirect("AllContacts.aspx");
        }
        else
        {

            Session["msg"] = "Log in first to View All Contacts.";
            Response.Redirect("Login.aspx");
        }
    }

    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }
    protected void SearchContact_Button2_Click(object sender, EventArgs e)
    {
        if (IsValid)
        {
            string user_id = (string)Session["user_id"];
            if (user_id == "" || user_id == null)
            {
                Session["msg"] = "Log in first to Search Contact.";
                Response.Redirect("Login.aspx");
            }
            else
            {
                string fieldName = seachField_DropDownList1.SelectedItem.Text;
                
                string fieldValue = Search_textbox.Text;
              
                string c="";
                    
                if (fieldName == "FullName")
                {
                     c = "SELECT FullName, NickName, DateOfBirth,PhoneNumber,WebAddress,Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (FullName = @fieldValue and Contacts_Table.User_id = @user_id)";
                }  
                
                else if (fieldName=="NickName")
                   {
                       c = "SELECT FullName, NickName, DateOfBirth,PhoneNumber,WebAddress,Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (NickName = @fieldValue and Contacts_Table.User_id = @user_id)";
                   } 
                else if(fieldName=="WebAddress")
                    {
                        c = "SELECT FullName, NickName, DateOfBirth,PhoneNumber,WebAddress,Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (WebAddress = @fieldValue and Contacts_Table.User_id = @user_id)";
                    }                       
                      
                else if(fieldName=="PhoneNumber")
                    {
                        c = "SELECT FullName, NickName, DateOfBirth,PhoneNumber,WebAddress,Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (PhoneNumber = @fieldValue and Contacts_Table.User_id = @user_id)";
                    }
                else if (fieldName == "Address")
                {
                    c = "SELECT FullName, NickName, DateOfBirth,PhoneNumber,WebAddress,Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Address = @fieldValue and Contacts_Table.User_id = @user_id)";
                } 
                     SqlCommand cmd = new SqlCommand(c, cn);
                    
                    
                    cmd.Parameters.AddWithValue("fieldValue", fieldValue);
                    cmd.Parameters.AddWithValue("user_id", user_id);
                    SqlDataReader reader = cmd.ExecuteReader();
                    GridView1.DataSource = reader;
                    GridView1.DataBind();
                   
                  
                    Label2.Text ="Search complete";
                   
               
               
            }
        }
        
    }

    protected void seachField_DropDownList1_SelectedIndexChanged(object sender, EventArgs e)
    {
        
            search_option_Label.Text = "Enter " + seachField_DropDownList1.SelectedItem.Text;
    }
}