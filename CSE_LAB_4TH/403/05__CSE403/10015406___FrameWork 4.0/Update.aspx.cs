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

            if (!IsPostBack)
            {
            string id = "";
            id = Request.QueryString["id"];
            if (id == "")
                Response.Redirect("Error.aspx");
            else
            {
                string c = "select * from Student_Table where ID=@ID";

                SqlCommand cmd = new SqlCommand(c, cn);

                cmd.Parameters.AddWithValue("ID", id);

                SqlDataReader reader = cmd.ExecuteReader();


                while (reader.Read())
                {
                    full_name_textbox.Text = reader["Name"].ToString();


                    string roll = reader["Roll"].ToString();
                    roll_no_textbox.Text = roll;



                    string reg = reader["Reg_No"].ToString();
                    reg_no_textbox.Text = reg;

                    string father = reader["Fathers_Name"].ToString();
                    fathers_name_textbox.Text = father;

                    string email = reader["Email"].ToString();
                    email_textbox.Text = email;


                    string phone = reader["Phone_No"].ToString();
                    phone_no_textbox.Text = phone;

                    string gender = reader["Gender"].ToString();



                    string birthday = reader["Date_Of_Birth"].ToString();



                    string age = reader["Age"].ToString();
                    age_textbox.Text = age;


                    string district = reader["District"].ToString();


                    string address = reader["Address"].ToString();
                    address_textbox.Text = address;
                    string edu_qual = reader["Edu_Qualification"].ToString();

                    HiddenField1.Value = id;

                }//end of while


                reader.Close();
                SqlDataReader reader2 = cmd.ExecuteReader();
                GridView2.DataSource = reader2;
                GridView2.DataBind();
                reader2.Close();


            }
        }
    }



    protected void Submit_Button1_Click(object sender, EventArgs e)
    {


		  if(IsValid)
           {
			  
               string gender = gendar_RadioButtonList1.SelectedValue;
               string birthday = birthday_Calendar1.SelectedDate.ToShortDateString();
               string district = district_DropDownList2.SelectedValue;
               string edu_qual = education_DropDownList1.SelectedValue;


               Response.Write("<br /><br />Name: "+full_name_textbox.Text+"<br /><br />");


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
                                                                   address_textbox.Text + "'  where id='" + HiddenField1.Value  + "'";


              Response.Write(c);

              


               SqlCommand cmd = new SqlCommand(c, cn);
               int a=cmd.ExecuteNonQuery();
               Response.Write("<br /><br />  Rows affected: " + a);

               result_update_label.Text = "Updated successfully";

               //browse
               
               string cc = "select * from Student_Table where ID='" + HiddenField1.Value + "' ";

               SqlCommand cmd2 = new SqlCommand(cc, cn);
               SqlDataReader reader = cmd2.ExecuteReader();
               GridView2.DataSource = reader;
               GridView2.DataBind();
      
                }
        
    }

    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Default.aspx");
    }
}