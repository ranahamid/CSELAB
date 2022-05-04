using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;


public partial class _Default : System.Web.UI.Page
{
    static  string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
  
            cn.Open();
            string c = "select * from Student_Table";
            SqlCommand cmd = new SqlCommand(c, cn);


            SqlDataReader reader = cmd.ExecuteReader();
            GridView1.DataSource = reader;
            GridView1.DataBind();

            reader.Close();
        
        
    }

    protected void Submit_Button1_Click(object sender, EventArgs e)
    {
       /* 

        string c = "select * from Student_Table";
        SqlCommand cmd = new SqlCommand(c,cn);
                

        SqlDataReader reader = cmd.ExecuteReader();
        GridView1.DataSource = reader;
        GridView1.DataBind();

        reader.Close();
         
        
        */
       
    }


    protected void Insert_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Insert.aspx");
    }

    
    protected void Delete_Button1_Click(object sender, EventArgs e)
    {
        string c = "delete from Student_Table where id='"+Convert.ToInt32(Id_Delete_TextBox1.Text).ToString()+"'";
        SqlCommand cmd = new SqlCommand(c,cn);
        cmd.ExecuteNonQuery();


        //browse
        string cc = "select * from Student_Table";
        SqlCommand cmd2 = new SqlCommand(cc, cn);
        SqlDataReader reader = cmd2.ExecuteReader();
        GridView1.DataSource = reader;
        GridView1.DataBind();


        Result_Label1.Text = "Deleted successfully";
        Id_Delete_TextBox1.Text = "";

    }
    protected void Id_Delete_TextBox1_TextChanged(object sender, EventArgs e)
    {

    }
    protected void update_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Update.aspx?id="+Id_update_TextBox1.Text);
    }
}
