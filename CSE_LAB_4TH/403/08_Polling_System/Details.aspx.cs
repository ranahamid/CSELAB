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

    protected void Page_Load(object sender, EventArgs e)
    {
        if (Session["user_id"] == null)
            Response.Redirect("~/Default.aspx");
        cn.Open();
    }


    protected void LogOut_Button2_Click(object sender, EventArgs e)
    {
        Session["user_id"] = null;
        Session["user_name"] = null;
        Session["msg"] = "Log Out Successfully.";
        Response.Redirect("Default.aspx");
    }
    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("AdminArea.aspx");
    }
}