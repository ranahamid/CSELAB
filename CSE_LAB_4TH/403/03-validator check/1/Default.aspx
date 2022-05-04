<%@ Page Language="C#" AutoEventWireup="true"  CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .style1
        {
            width: 185px;
        }
        .style2
        {
            width: 234px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <table style="width:100%;" align="center" cellpadding="1" cellspacing="1" 
            frame="above">
            <tr>
                <td class="style1">
                    <asp:Label ID="full_name_label" runat="server" Text="Full Name"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="full_name_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="Full_name_RequiredFieldValidator1" 
                        runat="server" ControlToValidate="full_name_textbox" Display="Dynamic" 
                        ErrorMessage="Name is Required" SetFocusOnError="True">Name is Required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="roll_name_label" runat="server" Text="Roll No"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="roll_no_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="Roll_no_RequiredFieldValidator2" runat="server" 
                        ControlToValidate="roll_no_textbox" Display="Dynamic" 
                        ErrorMessage="Roll No is Required" SetFocusOnError="True">Roll No is Required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="reg_no_label0" runat="server" Text="Reg. No."></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="reg_no_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="Reg_no_RequiredFieldValidator3" runat="server" 
                        ControlToValidate="reg_no_textbox" Display="Dynamic" 
                        ErrorMessage="Reg No is Required" SetFocusOnError="True">Reg No is Required</asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="Reg_no_RegularExpressionValidator2" 
                        runat="server" ControlToValidate="reg_no_textbox" Display="Dynamic" 
                        ErrorMessage="Reg. No. must be 6 digit" SetFocusOnError="True" 
                        ValidationExpression="\d{6}">Reg. No. must be 6 digit</asp:RegularExpressionValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="password_text" runat="server" Text="Password"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="password_textbox" runat="server" BorderColor="#FF66FF" 
                        TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="password_confirm_text" runat="server" Text="Confirm"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="confirm_textbox" runat="server" BorderColor="#FF66FF" 
                        TextMode="Password"></asp:TextBox>
                </td>
                <td>
                    <asp:CompareValidator ID="Password_CompareValidator1" runat="server" 
                        ControlToCompare="password_textbox" ControlToValidate="confirm_textbox" 
                        ErrorMessage="Password is not match" SetFocusOnError="True">Password is not match</asp:CompareValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    &nbsp;</td>
                <td class="style2">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="fathers_name_label" runat="server" Text="Father's name"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="fathers_name_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr valign="top">
                <td class="style1">
                    <asp:Label ID="date_of_birth_label" runat="server" Text="Date of Birth"></asp:Label>
                </td>
                <td class="style2">
                    <asp:Calendar ID="birthday_Calendar1" runat="server" CssClass="style1" 
                        NextPrevFormat="ShortMonth">
                        <DayStyle BackColor="#CCCCCC" />
                        <NextPrevStyle BackColor="#FFFFCC" BorderColor="#FFCCCC" ForeColor="#666666" />
                        <TitleStyle BackColor="#CCCC00" BorderColor="#FF3399" BorderStyle="Dotted" />
                    </asp:Calendar>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="email_label" runat="server" Text="E Mail"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="email_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="Email_RequiredFieldValidator4" runat="server" 
                        ControlToValidate="email_textbox" Display="Dynamic" 
                        ErrorMessage="Email is required" SetFocusOnError="True">Email is required</asp:RequiredFieldValidator>
                    <asp:RegularExpressionValidator ID="Email_RegularExpressionValidator1" 
                        runat="server" ControlToValidate="email_textbox" Display="Dynamic" 
                        ErrorMessage="Email is not in correct format" SetFocusOnError="True" 
                        ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*">Email is not in correct format</asp:RegularExpressionValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="phone_no_label" runat="server" Text="Phone No"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="phone_no_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="educational_qualification_label" runat="server" 
                        Text="Educational Qualification"></asp:Label>
                </td>
                <td class="style2">
                    <asp:DropDownList ID="education_DropDownList1" runat="server" 
                        AutoPostBack="True">
                        <asp:ListItem>SSC</asp:ListItem>
                        <asp:ListItem>HSC</asp:ListItem>
                        <asp:ListItem>BSC</asp:ListItem>
                        <asp:ListItem>MSC</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="gendar_label" runat="server" Text="Gender"></asp:Label>
                </td>
                <td class="style2">
                    <asp:RadioButtonList ID="gendar_RadioButtonList1" runat="server" 
                        AutoPostBack="True">
                        <asp:ListItem>Male</asp:ListItem>
                        <asp:ListItem>Female</asp:ListItem>
                    </asp:RadioButtonList>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="Gender_RequiredFieldValidator5" runat="server" 
                        ControlToValidate="gendar_RadioButtonList1" Display="Dynamic" 
                        ErrorMessage="Gender is Required" SetFocusOnError="True">Gender is Required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="age_label" runat="server" Text="Age"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="age_textbox" runat="server" BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="age_RequiredFieldValidator7" runat="server" 
                        ControlToValidate="age_textbox" Display="Dynamic" 
                        ErrorMessage="Age  is Required" SetFocusOnError="True">Age  is Required</asp:RequiredFieldValidator>
                    <asp:RangeValidator ID="Age_RangeValidator1" runat="server" 
                        ControlToValidate="age_textbox" ErrorMessage="Age must be 0 to 150" 
                        MaximumValue="150" MinimumValue="0" SetFocusOnError="True" Type="Integer">Age must be 0 to 150</asp:RangeValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="district_label" runat="server" Text="District"></asp:Label>
                </td>
                <td class="style2">
                    <asp:DropDownList ID="district_DropDownList2" runat="server">
                        <asp:ListItem>Dhaka</asp:ListItem>
                        <asp:ListItem>Rajshahi</asp:ListItem>
                        <asp:ListItem>Naogaon</asp:ListItem>
                        <asp:ListItem>Natore</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="District_RequiredFieldValidator6" 
                        runat="server" ControlToValidate="district_DropDownList2" Display="Dynamic" 
                        ErrorMessage="District is Required" SetFocusOnError="True">District is Required</asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="address_label" runat="server" Text="Address"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="address_textbox" runat="server" TextMode="MultiLine" 
                        BorderColor="#FF66FF"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    &nbsp;</td>
                <td class="style2">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
    
    </div>
    <asp:Button ID="Submit_Button1" runat="server" onclick="Submit_Button1_Click" 
        Text="Submit" />
    <br />
    <br />
    <asp:Panel ID="Result_Panel" runat="server" BackColor="#CCCCCC" 
        BorderColor="#993333" Width="353px">
        <asp:Label ID="result_label" runat="server"></asp:Label>
    </asp:Panel>
    <br />
    <br />
    <br />
    <br />
    <br />
    <br />


    </form>
</body>
</html>
