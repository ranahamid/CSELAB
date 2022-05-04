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

                    string pass = reader["Password"].ToString();

                    
                    password_textbox.Text = pass;
                    confirm_textbox.Text = pass;

                    string reg = reader["Reg_No"].ToString();
                    reg_no_textbox.Text = reg;

                    string father = reader["Fathers_Name"].ToString();
                    fathers_name_textbox.Text = father;

                    string email = reader["Email"].ToString();
                    email_textbox.Text = email;


                    string phone = reader["Phone_No"].ToString();
                    phone_no_textbox.Text = phone;

                    string gender = reader["Gender"].ToString();
                    gendar_RadioButtonList1.SelectedValue = gender;


                    //calendar setting
                    string birthday = reader["Date_Of_Birth"].ToString();
                    DateTime date1 = DateTime.Parse(birthday,System.Globalization.CultureInfo.InvariantCulture);
                     birthday_Calendar1.SelectedDate = date1;

                    string age = reader["Age"].ToString();
                    age_textbox.Text = age;


                   //district------------
                    string district = reader["District"].ToString();
                   
                    district_DropDownList2.SelectedValue = district;


                    string address = reader["Address"].ToString();
                    address_textbox.Text = address;
                    string edu_qual = reader["Edu_Qualification"].ToString();

                    HiddenField1.Value = id;



                }//end of while


                reader.Close();
             
            }
        }
    }



    protected void Submit_Button1_Click(object sender, EventArgs e)
    {


		  if(IsValid)
           {
			  
             


             //  Response.Write("<br /><br />Name: "+full_name_textbox.Text+"<br /><br />");

            /*
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
           */
               string id = HiddenField1.Value;
 
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


               string age = age_textbox.Text;
               if (age != "")
               {
                   result_label.Text += String.Format("Age={0} <br />", age);
               }


               string district = district_DropDownList2.SelectedValue;
               if (district != "")
               {
                   result_label.Text += String.Format("District={0} <br />", district);
               }

               string password = password_textbox.Text;
               if (password != "")
               {
                   result_label.Text += String.Format("Password={0} <br />", password);
               }


               string address = address_textbox.Text;
               if (address != "")
               {
                   result_label.Text += String.Format("Address={0} <br />", address);
               }

               string edu_qual = education_DropDownList1.SelectedValue;
               if (edu_qual != "")
               {
                   result_label.Text += String.Format("Edu Qulification={0} <br />", edu_qual);
               }


               string c = "update Student_Table set Name=@name,Roll=@roll,Reg_No=@reg_no,Password=@pass,Fathers_Name=@father_name"
                   +",Date_Of_Birth=@birthday ,Email=@email,Phone_No=@phone_no,Edu_Qualification=@edu_qual ,"
                   +"Gender=@gender,Age=@age,District=@district,Address=@address  where id=@id";

         

              SqlCommand cmd = new SqlCommand(c, cn);
              cmd.Parameters.Add("name",name);
              cmd.Parameters.Add("roll",roll);
              cmd.Parameters.Add("reg_no",reg);
              cmd.Parameters.Add("pass",password);
              cmd.Parameters.Add("father_name",father);
              cmd.Parameters.Add("birthday",birthday);
              cmd.Parameters.Add("email",email);
              cmd.Parameters.Add("phone_no",phone);
              cmd.Parameters.Add("edu_qual",edu_qual);
              cmd.Parameters.Add("gender",gender);
              cmd.Parameters.Add("age",age);
              cmd.Parameters.Add("district",district);
              cmd.Parameters.Add("address",address);
              cmd.Parameters.Add("id",id);

               int a=cmd.ExecuteNonQuery();
               result_update_label.Text = "Updated successfully";


               Response.Write("<br /><br />  Rows affected: " + a);/////
               Response.Write(c);//////

             

              
      
                }
        
    }

    protected void Home_Button1_Click(object sender, EventArgs e)
    {
        Response.Redirect("Default.aspx");
    }
}