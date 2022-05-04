using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


public partial class _Default : System.Web.UI.Page
{
    protected void Page_Load(object sender, EventArgs e)
    {
        msg_label.Text=(string)Session["msg"];
    }

    protected void Reg_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("~/reg.aspx");
    }


    protected void LoginButton2_Click(object sender, EventArgs e)
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

    protected void MyUserAreaButton3_Click(object sender, EventArgs e)
    {
        string user_id=(string) Session["user_id"];
        if (user_id != null)
        {
            Response.Redirect("~/userArea.aspx");
        }
        else
        {
            Session["msg"] = "Log in first";
            Response.Redirect("login.aspx");
        }
    }
}
