<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Update.aspx.cs" Inherits="Update" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title><link rel="stylesheet" type="text/css" href="styleSheet.css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Online Polling System -Admin Update Area</h3>
        <br />
        <br />
    <table style="width:100%;">
        <tr>
            <td>
                <asp:Label ID="Label1" runat="server" Text="Poll Name"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_name_TextBox1" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label4" runat="server" Text="Option 1"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin1_TextBox2" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label5" runat="server" Text="Option 2"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin2_TextBox3" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label6" runat="server" Text="Option 3"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin3_TextBox4" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label2" runat="server" Text="Start Time"></asp:Label>
            </td>
            <td>
                <asp:Calendar ID="start_Calendar1" runat="server"></asp:Calendar>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label3" runat="server" Text="End Time"></asp:Label>
            </td>
            <td>
                <asp:Calendar ID="end_Calendar2" runat="server" 
                    ondayrender="end_Calendar2_DayRender"></asp:Calendar>
            </td>
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
        <tr>
            <td>
                <asp:Button ID="Poll_Create_Button1" runat="server" 
                    onclick="Poll_Create_Button1_Click" Text="Update" />
            </td>
            <td>
                <br />
            </td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
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
        <br />
        <br />
    
    </div>
    </form>
</body>
</html>
