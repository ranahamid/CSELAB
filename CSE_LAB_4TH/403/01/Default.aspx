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
            width: 323px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <table style="width:100%;">
            <tr>
                <td class="style1">
                    <asp:Label ID="full_name_label" runat="server" Text="Full Name"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="full_name_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="roll_name_label" runat="server" Text="Roll No"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="roll_no_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="password_text" runat="server" Text="Password"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="password_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="password_confirm_text" runat="server" Text="Confirm"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="confirm_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="reg_no_label" runat="server" Text="Reg. No."></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="reg_no_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="fathers_name_label" runat="server" Text="Father's name"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="fathers_name_textbox" runat="server"></asp:TextBox>
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
                    <asp:TextBox ID="email_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="phone_no_label" runat="server" Text="Phone No"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="phone_no_textbox" runat="server"></asp:TextBox>
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
                    <asp:DropDownList ID="education_DropDownList1" runat="server">
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
                    <asp:RadioButtonList ID="gendar_RadioButtonList1" runat="server">
                        <asp:ListItem>Male</asp:ListItem>
                        <asp:ListItem>Female</asp:ListItem>
                    </asp:RadioButtonList>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="age_label" runat="server" Text="Age"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="age_textbox" runat="server"></asp:TextBox>
                </td>
                <td>
                    &nbsp;</td>
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
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="address_label" runat="server" Text="Address"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="address_textbox" runat="server" TextMode="MultiLine"></asp:TextBox>
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
