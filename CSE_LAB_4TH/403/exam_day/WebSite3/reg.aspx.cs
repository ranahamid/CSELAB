using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;


public partial class reg : System.Web.UI.Page
{
    static string conn = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";

    SqlConnection cn = new SqlConnection(conn);
    
    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();
        msg_label.Text = (string)Session["msg"];
    }


    protected void LogIn_Click(object sender, EventArgs e)
    {
         string user_id=(string) Session["user_id"];
          if (user_id == null)
          {
              Response.Redirect("~/login.aspx");
          }
          else
          { 
          Session["msg"]="you are already logged in.";
          }
    }


    protected void Home_Click(object sender, EventArgs e)
    {
        Response.Redirect("~/default.aspx");
    }


    protected void SubmitButton1_Click(object sender, EventArgs e)
    {
        if (IsValid)
        {
            string userName = UserName_TextBox2.Text;
            string password = PassWord_TextBox1.Text;
            //already user?
            string cc = "select * from userTabel where userName=@user";

            SqlCommand cmd2 = new SqlCommand(cc, cn);
            cmd2.Parameters.Add("user",userName);
            var alreadyUser = cmd2.ExecuteScalar();
            if(alreadyUser==null)
            {


            string c = "insert into userTabel values (@userName,@pass)";
            SqlCommand cmd = new SqlCommand(c, cn);
            cmd.Parameters.Add("userName", userName);
            cmd.Parameters.Add("pass",password);

            cmd.ExecuteNonQuery();

            Session["msg"] = "welcome " + userName;
            Response.Redirect("~/login.aspx");
            }
            else
            {
             
                msg_label.Text=msg_label.Text + " Try different name";
            }
                
        }
    }
}