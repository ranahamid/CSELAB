using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class Registration : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);
 

    protected void Page_Load(object sender, EventArgs e)
    {
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
    protected void Submit_Button1_Click(object sender, EventArgs e)
    {
        if (IsValid)
        {
            string userName = userName_textbox.Text;
            //check no double user

            string c = "select * from User_Table where UserName=@user";
            SqlCommand cmd = new SqlCommand(c, cn);

            cmd.Parameters.AddWithValue("user", userName);


            try
            {
                cmd.ExecuteScalar().ToString();
                result_label.Text = "Already User. Try different user Name.";
            }
            catch (Exception ee)
            {


                string email = email_textbox.Text;
                string password = password_textbox.Text;
                string cc = "Insert into User_Table  values( @name,@pass,@email)";

                SqlCommand cmd2 = new SqlCommand(cc, cn);
                cmd2.Parameters.Add("name", userName);
                cmd2.Parameters.Add("email", email);
                cmd2.Parameters.Add("pass", password);

                cmd2.ExecuteNonQuery();


                Session["msg"] = "Member created successfully. Now Log in.";

                Response.Redirect("login.aspx");
            }

        }
    }
    protected void Login_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("login.aspx");
    }
}