<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Insert.aspx.cs" Inherits="Default2" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="Stylesheet" type="text/css" href="Styles/Site.css" />
    <title></title>
    <style type="text/css">

        .style3
        {
            width: 157px;
            height: 55px;
        }
        .style4
        {
            width: 510px;
            height: 55px;
        }
        .style5
        {
            height: 55px;
        }
        .style2
        {
            width: 157px;
        }
        .style1
        {
            width: 510px;
        }
        </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
<table style="width: 98%; height: 178px;">
    <tr>
        <td align="left" class="style3">
            <asp:Label ID="name_Label1" runat="server" Text="Name"></asp:Label>
        </td>
        <td class="style4">
            <asp:TextBox ID="Name_TextBox1" runat="server"></asp:TextBox>
        </td>
        <td class="style5">
            </td>
    </tr>
    <tr>
        <td align="left" class="style2">
            <asp:Label ID="Roll_Label2" runat="server" Text="Roll No"></asp:Label>
        </td>
        <td class="style1">
            <asp:TextBox ID="Roll_TextBox2" runat="server"></asp:TextBox>
        </td>
        <td>
            &nbsp;</td>
    </tr>
    <tr>
        <td align="right" class="style2">
            <asp:Button ID="SubmitButton1" runat="server" Text="Insert" 
                onclick="SubmitButton1_Click" />
        </td>
        <td class="style1">
            <br />
        </td>
        <td>
            &nbsp;</td>
    </tr>
</table>
<asp:Label ID="Result_Label1" runat="server" ></asp:Label>
<br />
    
    </div>
    <asp:Button ID="Home_Button1" runat="server" Text="Home" 
        onclick="Home_Button1_Click" style="margin-top: 0px" />
    </form>
</body>
</html>
