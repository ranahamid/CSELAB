using System;
using System.Collections.Generic;
using System.Linq;
using System.Web;
using System.Web.UI;
using System.Web.UI.WebControls;


using System.Data.SqlClient;

public partial class Update : System.Web.UI.Page
{
    static string con = @"Data Source=.\SQLEXPRESS;AttachDbFilename=|DataDirectory|\Database.mdf;Integrated Security=True;User Instance=True";
    SqlConnection cn = new SqlConnection(con);

    protected void Page_Load(object sender, EventArgs e)
    {
        cn.Open();

    
        cn.Close();
    }

    
 
    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Default.aspx");
    }


    protected void Submit_Button1_Click(object sender, EventArgs e)
    {
        cn.Open();
        string id = Request.QueryString["id"];




        string gender = gendar_RadioButtonList1.SelectedValue;
        string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();
        string district = district_DropDownList2.SelectedValue;
        string edu_qual = education_DropDownList1.SelectedValue;


      //  string c = "update Student_Table set Name='" + full_name_textbox.Text + "',Roll='" + roll_no_textbox.Text + "' where id='" + Convert.ToInt32(id).ToString() + "'";
        string c = "update Student_Table set Name='" + full_name_textbox.Text + "',Roll='" +
                                                      roll_no_textbox.Text + "',Reg_No='" +
                                                      reg_no_textbox.Text + "',Password='" +
                                                      password_textbox.Text + "',Fathers_Name='" +
                                                      fathers_name_textbox.Text + "',Date_Of_Birth='" +
                                                      birthday + "',Email='" +
                                                      email_textbox.Text + "',Phone_No='" +
                                                      phone_no_textbox.Text + "',Edu_Qualification='" +
                                                      edu_qual + "',Gender='" +
                                                      gender + "',Age='" +
                                                      age_textbox.Text + "',District='" +
                                                      district + "',Address='" +
                                                      address_textbox.Text + "'  where id='" + Convert.ToInt32(id).ToString() + "'";
        
         
        
        SqlCommand cmd = new SqlCommand(c, cn);

        cmd.ExecuteNonQuery();
        result_update_label.Text = "Updated successfully";

    }
}