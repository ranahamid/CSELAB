using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;

using System.Data.SqlClient;

public partial class CastVote : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        if (Session["user_id"] == null)
            Response.Redirect("~/Default.aspx");
        cn.Open();
        string userID = (string)Session["user_id"];
        if (!IsPostBack)
        {
           // string poll_id = Request.QueryString["poll_id"];

        }
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
        //cast vote
        
        string poll_id = Request.QueryString["poll_id"];
        string user_id = (string)Session["user_id"];

        //find user_id in poll_id
        string c2 = "select user_poll_id from user_poll_table where poll_id=@poll_id and user_id=@user_id";
        SqlCommand cmd3 = new SqlCommand(c2, cn);

        cmd3.Parameters.AddWithValue("user_id", user_id);
        cmd3.Parameters.AddWithValue("poll_id",poll_id);

        
        var first=cmd3.ExecuteScalar();

        string checking_poll_option_id=null;
        if (first != null)
        {
            checking_poll_option_id = first.ToString();
        }
        //if not found

        if (checking_poll_option_id == null)
        {
            //increase value of count in poll_options
            //get poll_id

            string poll_option_id = option_RadioButtonList1.SelectedValue;


            //update count
            string c3 = "UPDATE poll_option_table set  count= count+1 where poll_option_id=@poll_option_id";
            SqlCommand cmd5 = new SqlCommand(c3, cn);
            cmd5.Parameters.AddWithValue("poll_option_id", poll_option_id);
            cmd5.ExecuteNonQuery();

            Msg_Label1.Text = "update count";

            //insert into user_poll table

            

            string c4 = "INSERT into user_poll_table values (@user_id,@poll_id)";
            SqlCommand cmd6 = new SqlCommand(c4,cn);
            cmd6.Parameters.AddWithValue("user_id",user_id);
            cmd6.Parameters.AddWithValue("poll_id",poll_id);
            cmd6.ExecuteNonQuery();

            Response.Redirect("voting_ok.aspx");

        }
        else
        {
            Msg_Label1.Text = "You have already voted to this poll.";
        }
     //ok
    }
    protected void back_to_user_area_Click(object sender, EventArgs e)
    {
        Response.Redirect("UserArea.aspx");
    }
}