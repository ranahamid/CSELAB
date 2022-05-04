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
    }
   
    protected void Submit_Button1_Click(object sender, EventArgs e)
    {
        
            string name = full_name_textbox.Text;
            if (name != "")
                {
                    result_label.Text = String.Format("Name={0} <br />", name);
                }


            string roll = roll_no_textbox.Text;
            if (roll != "")
            {
                result_label.Text += String.Format("Roll={0} <br />", roll);
            }



            string reg = reg_no_textbox.Text;
            if (reg != "")
            {
                result_label.Text += String.Format("Reg={0} <br />", reg);
            }



            string father = fathers_name_textbox.Text;
            if (father != "")
            {
                result_label.Text += String.Format("Father's Name={0} <br />", father);
            }


            string email = email_textbox.Text;
            if (email != "")
            {
                result_label.Text += String.Format("E-mail={0} <br />", email);
            }


            string phone = phone_no_textbox.Text;
            if (phone != "")
            {
                result_label.Text += String.Format("Phone={0} <br />", phone);
            }


            string gender = gendar_RadioButtonList1.SelectedValue;
            if (gender != "")
            {
                result_label.Text += String.Format("Gender={0} <br />", gender);
            }


            string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();
            if (birthday != "")
            {
                result_label.Text += String.Format("Birhtday={0} <br />", birthday);
            }


            string age= age_textbox.Text;
            if (age != "")
            {
                result_label.Text += String.Format("Age={0} <br />", age);
            }


            string district = district_DropDownList2.SelectedValue;
            if (district != "")
            {
                result_label.Text += String.Format("District={0} <br />", district);
            }


            string address = address_textbox.Text;
            if (address != "")
            {
                result_label.Text += String.Format("Address={0} <br />", address);
            }

        string edu_qual=education_DropDownList1.SelectedValue;
            if (edu_qual != "")
            {
                result_label.Text += String.Format("Edu Qulification={0} <br />", edu_qual);
            }

        
        //insert

           string c = "Insert into student_table  values ('" + full_name_textbox.Text + "','" + 
                                                               roll_no_textbox.Text +"','" + 
                                                               reg_no_textbox.Text +"','" +
                                                               password_textbox.Text +"','" +
                                                               fathers_name_textbox.Text +"','" +
                                                               birthday + "','" +
                                                               email_textbox.Text + "','" +
                                                               phone_no_textbox.Text + "','" +
                                                               edu_qual + "','" +
                                                               gender + "','" + 
                                                               age_textbox.Text +"','" +
                                                               district + "','" +
                                                               address_textbox.Text + "')";
           SqlCommand cmd = new SqlCommand(c, cn);
           cmd.ExecuteNonQuery();
           result_insert_label.Text = "Insert successfully";
        
    }
    protected void Home_Button1_Click(object sender, EventArgs e)
    {

        Response.Redirect("Default.aspx");
    }
}