<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UserArea.aspx.cs" Inherits="UserArea" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">
        .style2
        {
            width: 270px;
        }
        .style3
        {
            width: 527px;
        }
        .style4
        {
            width: 167px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
<h3>
    Online Address Book 
    -Member Area</h3>
    
    </div>
    <table style="width:100%;">
        <tr>
            <td class="style1">
        <asp:Button ID="addContacts_Button3" runat="server" CssClass="google_button2" 
                    Text="Add Contact" ValidationGroup="group2" 
                    onclick="addContacts_Button3_Click" Width="244px" />
            </td>
            <td class="style4">
        <asp:Button ID="browseallcontacts_Button2" runat="server" CssClass="google_button" Text="Browse All Contacts" 
                    ValidationGroup="group2" onclick="browseallcontacts_Button2_Click" 
                    Width="244px" />
            </td>
            <td class="style3">
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style1">
                &nbsp;</td>
            <td class="style4">
                &nbsp;</td>
            <td class="style3">
                &nbsp;</td>
        </tr>
        <tr>
            <td class="style1">
        <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" Text="Home" 
                    ValidationGroup="group2" onclick="Home_Button1_Click" Width="244px" />
            </td>
            <td class="style4">
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button4" Text="Log Out" 
                    ValidationGroup="group2" onclick="LogOut_Button2_Click" Width="240px" />
            </td>
            <td class="style3">
                &nbsp;</td>
        </tr>
    </table>  
    <table style="width:100%;">
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
        <tr>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <p>
        &nbsp;</p>
    
<h3>
    Search Contact</h3>
    <p>
        <table style="width: 100%; margin-top: 19px;">
            <tr>
                <td class="style2">
                    <asp:Label ID="Label1" runat="server" Text="Select Field"></asp:Label>
                </td>
                <td>
                    <asp:DropDownList ID="seachField_DropDownList1" runat="server" 
                        AppendDataBoundItems="True" Height="34px" 
                        onselectedindexchanged="seachField_DropDownList1_SelectedIndexChanged" 
                        Width="249px" AutoPostBack="True">
                        <asp:ListItem Selected="True">FullName</asp:ListItem>
                        <asp:ListItem>NickName</asp:ListItem>
                        <asp:ListItem>WebAddress</asp:ListItem>
                        <asp:ListItem>PhoneNumber</asp:ListItem>
                        <asp:ListItem>Address</asp:ListItem>
                    </asp:DropDownList>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style2">
                    <asp:Label ID="search_option_Label" runat="server" Text="Enter Search Value"></asp:Label>
                </td>
                <td>
                <asp:TextBox ID="Search_textbox" runat="server" BorderColor="#FF66FF" 
                    CssClass="div_form" ValidationGroup="group1" Width="253px"></asp:TextBox>
                </td>
                <td>
                    <asp:RequiredFieldValidator ID="RequiredFieldValidator1" runat="server" 
                        ControlToValidate="Search_textbox" Display="Dynamic" 
                        ErrorMessage="Value Required."></asp:RequiredFieldValidator>
                </td>
            </tr>
            <tr>
                <td class="style2">
        <asp:Button ID="SearchContact_Button2" runat="server" CssClass="google_button5" Text="Submit" 
                    ValidationGroup="group2" onclick="SearchContact_Button2_Click" Width="244px" />
                </td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
    </p>
    <p>
        &nbsp;</p>
    <p>
        <asp:GridView ID="GridView1" runat="server">
        </asp:GridView>
    </p>
    <p>
        <asp:Label ID="Label2" runat="server"></asp:Label>
    </p>
    </form>
  
</body>
</html>
