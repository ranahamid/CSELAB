using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;


public partial class UpdateContact : System.Web.UI.Page
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
            if (contact_id == "" ||contact_id ==null)
                Response.Redirect("login.aspx");
            else
            {
                string c = "SELECT Contacts_Table.Contact_id, Contacts_Table.FullName, Contacts_Table.NickName, Contacts_Table.DateOfBirth, PhoneNumber_Table.PhoneNumber, Contacts_Table.WebAddress, Contacts_Table.Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2 and Contacts_Table.contact_id=@contact_id)";
                string user_id = (string)Session["user_id"];

                SqlCommand cmd = new SqlCommand(c, cn);

                cmd.Parameters.AddWithValue("User_id2", user_id);
                cmd.Parameters.AddWithValue("contact_id", contact_id);

                SqlDataReader reader = cmd.ExecuteReader();


                while (reader.Read())
                {
                    full_name_textbox.Text = reader["FullName"].ToString();
                    nickName_textbox.Text = reader["NickName"].ToString();

                    phone_no_textbox.Text= reader["PhoneNumber"].ToString();
                  
                    webaddress_textbox.Text = reader["WebAddress"].ToString();
                    address_textbox.Text = reader["Address"].ToString();

                    //calendar setting
                    string birthday = reader["DateOfBirth"].ToString();
                    DateTime date1 = DateTime.Parse(birthday, System.Globalization.CultureInfo.InvariantCulture);
                    birthday_Calendar1.SelectedDate = date1;
                }//end of while


                reader.Close();

            }
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


    protected void AddContacts_Button1_Click(object sender, EventArgs e)
    {
        //update Contacts

        string fullName = full_name_textbox.Text;// full_name_textbox.Text;
        string NickName = nickName_textbox.Text;// roll_no_textbox.Text;
        string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();


        string WebAddress = webaddress_textbox.Text;// password_textbox.Text;
        string address = address_textbox.Text;

        string userID = (string)Session["user_id"];
        string contacts_id = "";
        contacts_id = Request.QueryString["id"];

        string c = "UPDATE Contacts_table set  FullName= @fullName,NickName= @nickName,DateOfBirth=@birthday"
                   + ",WebAddress= @webAddress,Address= @address,User_id= @user_id where Contact_id=@contacts_id";

        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("fullName", fullName);
        cmd.Parameters.Add("nickName", NickName);
        cmd.Parameters.Add("birthday", birthday);
        cmd.Parameters.Add("webAddress", WebAddress);
        cmd.Parameters.Add("address", address);
        cmd.Parameters.Add("user_id", userID);
        cmd.Parameters.Add("contacts_id", contacts_id);

        cmd.ExecuteNonQuery();

        //Contacts id
        string cc = "select max(Contact_id) from Contacts_table  ";

        SqlCommand cmd2 = new SqlCommand(cc, cn);
        contacts_id = cmd2.ExecuteScalar().ToString();

        //phone Number
        string phone = phone_no_textbox.Text;
        string ccs = "update PhoneNumber_table set  PhoneNumber=@phone_Number,Contact_id=@contacts_id where Contact_id=@contacts_id";

        SqlCommand cmd3 = new SqlCommand(ccs, cn);
        cmd3.Parameters.Add("phone_Number", phone);
        cmd3.Parameters.Add("contacts_id", contacts_id);

        cmd3.ExecuteNonQuery();


        Message_Label.Text = "Update successfully";
    }
    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }
}