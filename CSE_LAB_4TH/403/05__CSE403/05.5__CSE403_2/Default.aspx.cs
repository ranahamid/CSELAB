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
        GridView1.DataBind();
 
    }
    protected void Insert_Button1_Click(object sender, EventArgs e)
    {

        Response.Redirect("Insert.aspx");
    }
    
    protected void Page_PreRenderComplete(object sender, EventArgs e)
    {
        GridView1.DataBind();
    }





    protected void LinkButton2_Click(object sender, EventArgs e)
    {
        //delete
        LinkButton l = (LinkButton)sender;
        String id=l.CommandArgument;

        Result_Label1.Text = id;

       // string c = "delete from Student_Table where ID='" + Convert.ToInt32(id).ToString() + "'";

        string c = "delete from Student_Table where ID=@id";
               
        SqlCommand cmd = new SqlCommand(c, cn);
        cmd.Parameters.Add("id",id);
        cmd.ExecuteNonQuery();


        //browse
        string cc = "select * from Student_Table";
        SqlCommand cmd2 = new SqlCommand(cc, cn);
        SqlDataReader reader = cmd2.ExecuteReader();


        Result_Label1.Text = "Deleted successfully";
        
    }


    protected void LinkButton1_Click(object sender, EventArgs e)
    {
        //edit
        LinkButton l = (LinkButton)sender;
        String id = l.CommandArgument;

        Response.Redirect("~/Update.aspx?id=" + id);

    }
}