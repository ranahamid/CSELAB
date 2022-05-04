using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class add : System.Web.UI.Page
{
    static string cnoo = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(cnoo);

    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();
    }
    protected void allcontactButton1_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != null)
            Response.Redirect("~/all.aspx");
        else
        {
            Session["msg"] = "Log in first.";
            Response.Redirect("~/login.aspx");
        }
    }


    protected void BrowseAllContactButton_Click(object sender, EventArgs e)
    {
        //userarea
        string user_id = (string)Session["user_id"];
        if (user_id != null)
            Response.Redirect("~/userArea.aspx");
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
    protected void SubmitButton1_Click(object sender, EventArgs e)
    {
        if (IsValid)
        {


            //insert 
            string fullName = FullNameTextBox1.Text;
            string nickName = NickNameTextBox2.Text;
            string birth = birthadayCalendar1.SelectedDate.ToShortDateString();
               
            string address = AddressTextBox3.Text;
            string phone = PhoneNumberTextBox4.Text;

            string user_id=(string) Session["user_id"];


          //  Response.Write(user_id);


            string c = "insert into contactTable values(@fn,@nn,@address,@day,@user_id)";

            SqlCommand cmd1 = new SqlCommand(c, cn);
            cmd1.Parameters.Add("fn", fullName);
             cmd1.Parameters.Add("nn", nickName);
             cmd1.Parameters.Add("day", birth);
             cmd1.Parameters.Add("address", address);
             cmd1.Parameters.Add("user_id", user_id);

             cmd1.ExecuteNonQuery();
            //phone
             string c3 = "select max(contact_id) from contactTable ";
             SqlCommand cmd3 = new SqlCommand(c3, cn);
             var co =  cmd3.ExecuteScalar();
             string contact_id = co.ToString();
 
            //insert

             string c2 = "insert into phoneTable values(@fn,@contact_id)";

             SqlCommand cmd2 = new SqlCommand(c2, cn);
             cmd2.Parameters.Add("fn ", phone);
             cmd2.Parameters.Add("contact_id ", contact_id);
             cmd2.ExecuteNonQuery();

             msg_label.Text = "insert successfully...";
             Session["msg"] = null;

        }
        
    }
}