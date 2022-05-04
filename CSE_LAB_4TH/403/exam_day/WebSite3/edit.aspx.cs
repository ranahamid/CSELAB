using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;
public partial class edit : System.Web.UI.Page
{
    static string cnoo = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(cnoo);
    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();
        if (!IsPostBack)
        {
           string user_id=(string) Session["user_id"];
           if(user_id==null)
            {
               Session["msg"] = "Log in first.";
               Response.Redirect("~/login.aspx");
           }
            string contact_id=Request.QueryString["contact_id"];

            string c = "SELECT contactTable.contact_id, contactTable.fullName, contactTable.nickName, contactTable.address, contactTable.dateOfBirth, phoneTable.phoneNumber FROM contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id where (contactTable.contact_id=@contact_id)";
            SqlCommand cmd = new SqlCommand(c, cn);
            cmd.Parameters.Add("contact_id", contact_id);
            SqlDataReader reader = cmd.ExecuteReader();
       
            while (reader.Read())
            {
                FullNameTextBox1.Text = reader["fullName"].ToString();
                NickNameTextBox2.Text = reader["nickName"].ToString();
                AddressTextBox3.Text  = reader["address"].ToString();
                
                PhoneNumberTextBox4.Text = reader["phoneNumber"].ToString();

               // string birth = reader["dateOfBirth"].ToString();
              //  DateTime d= DateTime.Parse(birth, System.Globalization.CultureInfo.InvariantCulture);
              //  birthadayCalendar1.SelectedDate= d;

             //   string birthday = reader["DateOfBirth"].ToString();
             //   DateTime date1 = DateTime.Parse(birthday, System.Globalization.CultureInfo.InvariantCulture);
              //  birthday_Calendar1.SelectedDate = date1;
//

                string b = reader["dateOfBirth"].ToString();
                DateTime d = DateTime.Parse(b, System.Globalization.CultureInfo.InvariantCulture);
                birthadayCalendar1.SelectedDate = d;
            }
            reader.Close();

        }
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
    protected void userareaButton_Click(object sender, EventArgs e)
    {//userarea
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

    }
}