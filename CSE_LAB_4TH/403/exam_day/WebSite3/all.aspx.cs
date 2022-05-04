using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;
public partial class all : System.Web.UI.Page
{
    static string conn = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(conn);

    
    protected void Page_Load(object sender, EventArgs e)
    {
        msg_label.Text = (string)Session["msg"];
        cn.Open();
        string user_id = (string)Session["user_id"];
    
   
    }


    protected void Page_PreRenderComplete(object sender, EventArgs e)
    {
        GridView1.DataBind();

    }


   
    protected void EditLinkButton1_Click(object sender, EventArgs e)
    {
        //edit
        LinkButton l = (LinkButton)sender;
        string contact_id = l.CommandArgument;

        Response.Redirect("~/edit.aspx?contact_id=" + contact_id);

    }
    protected void deletetLinkButton1_Click(object sender, EventArgs e)
    {
        //deleete
        LinkButton l = (LinkButton)sender;
        string contact_id = l.CommandArgument;

        string c = "delete from contactTable where contact_id=@contact_id";
        SqlCommand cmd1 = new SqlCommand(c, cn);
        cmd1.Parameters.Add("contact_id", contact_id);
        cmd1.ExecuteNonQuery();

        string cq = "delete from phoneTable where contact_id=@contact_id";
        SqlCommand cmd2 = new SqlCommand(cq, cn);
        cmd2.Parameters.Add("contact_id", contact_id);
        cmd1.ExecuteNonQuery();
        msg_label.Text = "deleted successfully.";

    }
    protected void detailsLinkButton1_Click(object sender, EventArgs e)
    {
        //details

        LinkButton l = (LinkButton)sender;
        string contact_id = l.CommandArgument;
        Response.Redirect("~/details.aspx?contact_id=" + contact_id);
    }
    protected void AddContactButton1_Click(object sender, EventArgs e)
    {
        string user_id = (string)Session["user_id"];
        if (user_id != null)
            Response.Redirect("~/add.aspx");
        else
        {
            Session["msg"] = "Log in first.";
            Response.Redirect("~/login.aspx");
        }
    }
    protected void BrowseAllContactButton_Click(object sender, EventArgs e)
    {
        //userArea
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
}