<%@ Page Language="C#" AutoEventWireup="true" CodeFile="login.aspx.cs" Inherits="login" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .style1
        {
            width: 262px;
        }
        .style2
        {
            width: 341px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <br />
        <asp:Label ID="msg_label" runat="server"></asp:Label>
        <br />
        <br />
        <table style="width:100%;">
            <tr>
                <td class="style1">
                    <asp:Label ID="UserNameLabel1" runat="server" Text="User Name"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="UserName_TextBox2" runat="server" ValidationGroup="group1" 
                        Width="300px"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="UserName_TextBox2" Display="Dynamic" 
                        ErrorMessage="User Name Require" ValidationGroup="group1"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Label ID="PasswordLabel2" runat="server" Text="Password"></asp:Label>
                </td>
                <td class="style2">
                    <asp:TextBox ID="PassWord_TextBox1" runat="server" TextMode="Password" 
                        ValidationGroup="group1" Width="298px"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="PassWord_TextBox1" Display="Dynamic" 
                        ErrorMessage="Password Required." ValidationGroup="group1"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Button ID="SubmitButton1" runat="server" onclick="SubmitButton1_Click" 
                        Text="Submit" ValidationGroup="group1" Width="203px" />
                </td>
                <td class="style2">
                    <asp:Button ID="RegButton1" runat="server" onclick="RegButton1_Click" 
                        Text="Registration" Width="263px" />
                </td>
                <td>
                    <asp:Button ID="Home" runat="server" onclick="Home_Click" Text="Home" 
                        Width="290px" />
                </td>
            </tr>
        </table>
        <br />
<br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <asp:SqlDataSource ID="SqlDataSource1" runat="server"></asp:SqlDataSource>
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
                    <br />
    
    </div>
    </form>
</body>
</html>
