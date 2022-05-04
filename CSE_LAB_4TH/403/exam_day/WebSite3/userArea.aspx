<%@ Page Language="C#" AutoEventWireup="true" CodeFile="userArea.aspx.cs" Inherits="userArea" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <style type="text/css">
        .style1
        {
            width: 322px;
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
        <br />
        <br />
        <table style="width:100%;">
            <tr>
                <td>
                    <asp:Button ID="AddContactButton1" runat="server" 
                        onclick="AddContactButton1_Click" Text="AddContact" Width="114px" />
                </td>
                <td>
                    <asp:Button ID="BrowseAllContactButton" runat="server" 
                        onclick="BrowseAllContactButton_Click" Text="BrowseAllContact" />
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td>
                    <asp:Button ID="HomeButton3" runat="server" onclick="HomeButton3_Click" 
                        Text="Home" Width="115px" />
                </td>
                <td>
                    <asp:Button ID="LogoutButton4" runat="server" onclick="LogoutButton4_Click" 
                        Text="Logout" Width="159px" />
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
        </table>
        <br />
        <br />
        <br />
        <br />
        <table style="width:100%;">
            <tr>
                <td>
                    Select Field</td>
                <td class="style1">
                    <asp:DropDownList ID="DropDownList1" runat="server" AutoPostBack="True" 
                        onselectedindexchanged="DropDownList1_SelectedIndexChanged" 
                        ValidationGroup="group1">
                        <asp:ListItem>fullName</asp:ListItem>
                        <asp:ListItem>nickName</asp:ListItem>
                        <asp:ListItem> address</asp:ListItem>
                        <asp:ListItem>phoneNumber</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="DropDownList1" Display="Dynamic" 
                        ErrorMessage="RequiredFieldValidator" ValidationGroup="group1"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td>
                    Enter value</td>
                <td class="style1">
                    <asp:TextBox ID="SearchValueTextBox1" runat="server" ValidationGroup="group1" 
                        Width="255px"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator2" runat="server" 
                        ControlToValidate="SearchValueTextBox1" Display="Dynamic" 
                        ErrorMessage="RequiredFieldValidator" ValidationGroup="group1"></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td>
                    <asp:Button ID="SubmitButton1" runat="server" onclick="SubmitButton1_Click" 
                        Text="Submit" ValidationGroup="group1" />
                </td>
                <td class="style1">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
        <br />
        <br />
        <asp:GridView ID="GridView1" runat="server">
        </asp:GridView>
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
