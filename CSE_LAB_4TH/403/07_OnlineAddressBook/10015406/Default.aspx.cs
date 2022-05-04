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
            string msg = (string)Session["msg"];
            Message_Label1.Text = msg;

        }
    }
   

    protected void LogIn_Button2_Click(object sender, EventArgs e)
    {
        Response.Redirect("Login.aspx");
    }


    protected void Registration_Button1_Click1(object sender, EventArgs e)
    {
        Response.Redirect("UserRegistration.aspx");
    }
    protected void UserArea_Button3_Click(object sender, EventArgs e)
    {

        string user_id = (string)Session["user_id"];
        if (user_id != "" && user_id != null)
        {
            Response.Redirect("UserArea.aspx");
        }
        else
        {

            Session["msg"] = "Log in first to go User Area.";
            Response.Redirect("Login.aspx");
        }

       
    }
}
