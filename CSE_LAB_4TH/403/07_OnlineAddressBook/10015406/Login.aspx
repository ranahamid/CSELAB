<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Login.aspx.cs" Inherits="Login" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="stylesheet" type="text/css" href="styleSheet.css" />
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
    
<h3>
    Online Address Book Log in Form</h3>
    
    </div>
    <br />
    <asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
        BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
    <br />
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
                <asp:RequiredFieldValidator ID="Password_RequiredFieldValidator1" 
                    runat="server" ControlToValidate="password_textbox" Display="Dynamic" 
                    ErrorMessage="Password Required"></asp:RequiredFieldValidator>
            </td>
        </tr>
    </table>
    <p>
        &nbsp;</p>
    <table style="width:100%;">
        <tr>
            <td>
    <asp:Button ID="Login_Button1" runat="server" CssClass="google_button5" 
        Text="Log in" onclick="Login_Button1_Click" ValidationGroup="group1" />
            </td>
            <td>
                &nbsp;</td>
            <td>
    <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
        onclick="Home_Button1_Click" Text="Home" ValidationGroup="group2" />
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
                &nbsp;</td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <asp:SqlDataSource ID="SqlDataSource1" runat="server"></asp:SqlDataSource>
    </form>
</body>
</html>
