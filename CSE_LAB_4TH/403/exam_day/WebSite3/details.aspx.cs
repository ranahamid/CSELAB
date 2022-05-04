using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;
public partial class details : System.Web.UI.Page
{
    static string conn = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(conn);
    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();

    }
}