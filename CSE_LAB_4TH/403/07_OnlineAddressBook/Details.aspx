<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Details.aspx.cs" Inherits="Details" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <link rel="stylesheet" type="text/css" href="styleSheet.css" />
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
<h3>
    Online Address Book -Details</h3>
    
        <table style="width:100%;">
            <tr>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" Text="Log Out" 
                    ValidationGroup="group2" onclick="LogOut_Button2_Click" Width="244px" 
                        style="margin-left: 759px" />
                </td>
            </tr>
        </table>
    
        <br />
        <br />
        <asp:Label ID="details_Label1" runat="server"></asp:Label>
        <br />
        <br />
        <table style="width:100%;">
            <tr>
                <td>
        <asp:Button ID="Home_Button1" runat="server" CssClass="google_button5" 
            onclick="Home_Button1_Click" Text="Home" ValidationGroup="group2" Width="244px" />
                </td>
                <td>
        <asp:Button ID="MyUserArea_Button2" runat="server" CssClass="google_button2" 
            onclick="MyUserArea_Button2_Click" Text="My User Area" ValidationGroup="group2" 
                        Width="244px" />
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
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
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
    
    </div>
    </form>
</body>
</html>
