using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class Login : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();
        if (!IsPostBack)
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
            string msg = (string)Session["msg"];
            Msg_Label1.Text = msg;
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
    protected void Login_Button1_Click(object sender, EventArgs e)
    {
        string username = userName_textbox.Text;
        string pass = password_textbox.Text;
        string c = "select * from User_Table where UserName=@user and Password=@pass";
        SqlCommand cmd = new SqlCommand(c, cn);

         cmd.Parameters.AddWithValue("user", username);
         cmd.Parameters.AddWithValue("pass", pass);
         

         SqlDataReader reader = cmd.ExecuteReader();


         if (reader.Read())
         {
             string user_id = reader["user_id"].ToString();

             Session["user_id"] = user_id;
             Session["user_name"] = username;

             Session["msg"] = "Log in successfully";
             Response.Redirect("UserArea.aspx");
         }
         else
         {
             Msg_Label1.Text = "Login Failed. Try Again.";
         }
       
    }
}