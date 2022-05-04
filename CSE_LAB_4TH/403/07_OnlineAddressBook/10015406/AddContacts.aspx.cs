using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;
using System.Data.SqlClient;
public partial class AddContacts : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);
    string contacts_id;
    protected void Page_Load(object sender, EventArgs e)
    {
        if( Session["user_id"] == null )
            Response.Redirect("~/login.aspx");
        
        
        cn.Open();

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


    protected void AddContacts_Button1_Click(object sender, EventArgs e)
    {
        if (IsValid)
        {
            string fullName = full_name_textbox.Text;// full_name_textbox.Text;
            string NickName = nickName_textbox.Text;// roll_no_textbox.Text;
            string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();


            string WebAddress = webaddress_textbox.Text;// password_textbox.Text;
            string address = address_textbox.Text;

            string userID = (string)Session["user_id"];

            string c = "Insert into Contacts_table  values ( @fullName,@nickName,@birthday ,@webAddress,@address,@user_ID)";

            SqlCommand cmd = new SqlCommand(c, cn);
            cmd.Parameters.Add("fullName", fullName);
            cmd.Parameters.Add("nickName", NickName);
            cmd.Parameters.Add("birthday", birthday);
            cmd.Parameters.Add("webAddress", WebAddress);
            cmd.Parameters.Add("address", address);
            cmd.Parameters.Add("user_ID", userID);

            cmd.ExecuteNonQuery();

            //Contacts id
            string cc = "select max(Contact_id) from Contacts_table where User_id=@user_ID ";

            SqlCommand cmd2 = new SqlCommand(cc, cn);
            cmd2.Parameters.Add("user_ID", userID);
            contacts_id = cmd2.ExecuteScalar().ToString();

            //phone Number
            string phone = phone_no_textbox.Text;
            string ccs = "Insert into PhoneNumber_table  values ( @phone_Number,@contacts_id)";

            SqlCommand cmd3 = new SqlCommand(ccs, cn);
            cmd3.Parameters.Add("phone_Number", phone);
            cmd3.Parameters.Add("contacts_id", contacts_id);

            cmd3.ExecuteNonQuery();


            Message_Label.Text = "Insert successfully";
        }
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