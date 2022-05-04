<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UserRegistration.aspx.cs" Inherits="Registration" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <title></title>
    <link rel="stylesheet" type="text/css" href="styleSheet.css" />
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
    
<h3>
    Online Address Book 
    Registration Form</h3>
    
    </div>
    <table align="center" cellpadding="1" cellspacing="1" frame="above" 
        style="width:100%;">
        <tr>
            <td class="style1">
                <asp:Label ID="userName_label" runat="server" Text="User Name"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="userName_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:RequiredFieldValidator ID="userName_RequiredFieldValidator1" 
                    runat="server" ControlToValidate="userName_textbox" Display="Dynamic" 
                    ErrorMessage="Name is Required" SetFocusOnError="True" ValidationGroup="group1">Name is Required</asp:RequiredFieldValidator>
                <asp:RegularExpressionValidator ID="RegularExpressionValidator2" runat="server" 
                    ControlToValidate="userName_textbox" Display="Dynamic" 
                    ErrorMessage="UserName contains illegal character." 
                    ValidationExpression="[a-zA-Z_0-9]*$" ValidationGroup="group1"></asp:RegularExpressionValidator>
            </td>
        </tr>
        <tr>
            <td class="style1">
                <asp:Label ID="email_label" runat="server" Text="Email"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="email_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:RegularExpressionValidator ID="RegularExpressionValidator1" runat="server" 
                    ErrorMessage="Correct Email Address" 
                    ValidationExpression="\w+([-+.']\w+)*@\w+([-.]\w+)*\.\w+([-.]\w+)*" 
                    ControlToValidate="email_textbox" Display="Dynamic" 
                    ValidationGroup="group1"></asp:RegularExpressionValidator>
            </td>
        </tr>
        <tr>
            <td class="style1">
                <asp:Label ID="password_text" runat="server" Text="Password"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="password_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" TextMode="Password" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                    ControlToValidate="password_textbox" Display="Dynamic" 
                    ErrorMessage="Password Required" ValidationGroup="group1"></asp:RequiredFieldValidator>
            </td>
        </tr>
        <tr>
            <td class="style1">
                <asp:Label ID="password_confirm_text" runat="server" Text="Confirm"></asp:Label>
            </td>
            <td class="style2">
                <asp:TextBox ID="confirm_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" TextMode="Password" ValidationGroup="group1"></asp:TextBox>
            </td>
            <td>
                <asp:CompareValidator ID="Password_CompareValidator1" runat="server" 
                    ControlToCompare="password_textbox" ControlToValidate="confirm_textbox" 
                    ErrorMessage="Password is not match" SetFocusOnError="True" 
                    ValidationGroup="group1" Display="Dynamic">Password is not match</asp:CompareValidator>
                <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                    ControlToValidate="confirm_textbox" Display="Dynamic" 
                    ErrorMessage="Confirm Password" ValidationGroup="group1"></asp:RequiredFieldValidator>
            </td>
        </tr>
    </table>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <table style="width:100%;">
        <tr>
            <td>
    <asp:Button ID="Submit_Button1" runat="server" CssClass="google_button5" 
         Text="Submit" onclick="Submit_Button1_Click" ValidationGroup="group1" />
            </td>
            <td>
                &nbsp;</td>
            <td>
    <asp:Button ID="Login_Button1" runat="server" CssClass="google_button2" 
        Text="Log in" onclick="Login_Button1_Click" ValidationGroup="group12" />
            </td>
        </tr>
        <tr>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="result_label" runat="server"></asp:Label>
            </td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <asp:Button ID="Home_Button1" runat="server" CssClass="google_button4" 
        onclick="Home_Button1_Click" Text="Home" ValidationGroup="group2" />
    </form>
</body>
</html>
