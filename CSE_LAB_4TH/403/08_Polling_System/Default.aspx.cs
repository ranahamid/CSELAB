using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;

public partial class _Default : System.Web.UI.Page
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



    protected void Login_Button1_Click(object sender, EventArgs e)
    {
        string userName = userName_textbox.Text;
        string password = password_textbox.Text;

        string c = "select * from user_table where user_name=@UserName and password=@Password";
        SqlCommand cmd = new SqlCommand(c,cn);
        cmd.Parameters.AddWithValue("UserName", userName);
        cmd.Parameters.AddWithValue("Password", password);

        SqlDataReader reader = cmd.ExecuteReader();
        if (reader.Read())
        {
            string user_id = reader["user_id"].ToString();
            Session["user_id"] = user_id;
            Session["user_name"] = userName;
            Session["msg"] = "Log in successfully";

            string is_admin = reader["is_admin"].ToString();
            Session["is_admin"] = is_admin;
            if (is_admin == "0")
            {
                Response.Redirect("UserArea.aspx");
            
            }
            else
            {
                Response.Redirect("AdminArea.aspx");
                
            }
        }

        else
        {
            Msg_Label1.Text = "Login Failed. Try Again.";
        }


    }
  
}
