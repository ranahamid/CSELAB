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
        
    }
   
    protected void Submit_Button1_Click(object sender, EventArgs e)
    {
        string name = full_name_textbox.Text;
        string roll = roll_no_textbox.Text;

        string reg = reg_no_textbox.Text;

        string father = fathers_name_textbox.Text;
        string email = email_textbox.Text;
        string phone = phone_no_textbox.Text;
        string gender = gendar_RadioButtonList1.SelectedValue;
        string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();

        string age= age_textbox.Text;
        string district = district_DropDownList2.SelectedValue;
        string address = address_textbox.Text;

        result_label.Text = String.Format("Name={0} <br />Roll={1} <br />Reg. No.={2}<br />Father's Name={3}<br /> Email={4} <br />Phone={5} <br />Gender={6}  <br /> BirthDay={7} <br />Age={8} <br />District={9} <br />Address={10} <br />",
            name,
            roll,
            reg,
            father,
            email,
            phone,
            gender,
            birthday,
            age,
            district,
            address);
    }
}