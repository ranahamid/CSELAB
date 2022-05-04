using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;

public partial class Default2 : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();

    }

    protected void SubmitButton1_Click(object sender, EventArgs e)
    {
        string c = "Insert into student_table  values ('" + Name_TextBox1.Text + "','" + Roll_TextBox2.Text + "')";
        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.ExecuteNonQuery();
        Result_Label1.Text = "Insert successfully";
        Name_TextBox1.Text = "";
        Roll_TextBox2.Text = "";
    }
    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Default.aspx");
    }
}