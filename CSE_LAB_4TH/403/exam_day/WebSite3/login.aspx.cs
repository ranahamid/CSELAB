using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;

public partial class login : System.Web.UI.Page
{
    static string conn = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(conn);

    
    protected void Page_Load(object sender, EventArgs e)
    {
        msg_label.Text = (string)Session["msg"];
        cn.Open();

    }


    protected void PagePreRenderComplete(object sender, EventArgs e)
    { 
    }

    protected void SubmitButton1_Click(object sender, EventArgs e)
    {
        //submit
        string userName = UserName_TextBox2.Text;
        string password = PassWord_TextBox1.Text;

        string c="select user_id from userTabel where (userName=@user and password=@pass)" ;
        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("user", userName);
        cmd.Parameters.Add("pass",password);

        var user_id = cmd.ExecuteScalar();
        Session["user_id"] = user_id.ToString();
       // Response.Write(user_id.ToString());

        Session["msg"] = "logged in successfully.";
        Response.Redirect("~/userArea.aspx");
        
       
    }
    protected void Home_Click(object sender, EventArgs e)
    {
        Response.Redirect("~/default.aspx");
    }
    protected void RegButton1_Click(object sender, EventArgs e)
    {
        Response.Redirect("~/reg.aspx");
    }
}