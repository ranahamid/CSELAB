<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Details.aspx.cs" Inherits="Details" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
    <link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">
        .style1
        {
            width: 454px;
        }
    </style>
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
    
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT distinct Contacts_Table.Contact_id, Contacts_Table.FullName, Contacts_Table.NickName, Contacts_Table.DateOfBirth, Contacts_Table.WebAddress, Contacts_Table.Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2 and Contacts_Table.contact_id=@contact_id)">
            <SelectParameters>
                <asp:SessionParameter Name="User_id2" SessionField="user_id" />
                <asp:QueryStringParameter DefaultValue="" Name="contact_id" 
                    QueryStringField="id" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT all PhoneNumber FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2 and Contacts_Table.contact_id=@contact_id)">
            <SelectParameters>
                <asp:SessionParameter Name="User_id2" SessionField="user_id" />
                <asp:QueryStringParameter Name="contact_id" QueryStringField="id" />
            </SelectParameters>
        </asp:SqlDataSource>
        <br />
        <table style="width:100%;">
            <tr>
                <td class="style1">
                    <asp:GridView ID="GridView2" runat="server" AutoGenerateColumns="False" 
                        DataSourceID="SqlDataSource1">
                        <Columns>
                            <asp:BoundField DataField="Contact_id" HeaderText="Contact_id" 
                                InsertVisible="False" ReadOnly="True" SortExpression="Contact_id" />
                            <asp:BoundField DataField="FullName" HeaderText="FullName" 
                                SortExpression="FullName" />
                            <asp:BoundField DataField="NickName" HeaderText="NickName" 
                                SortExpression="NickName" />
                            <asp:BoundField DataField="DateOfBirth" HeaderText="DateOfBirth" 
                                SortExpression="DateOfBirth" />
                            <asp:BoundField DataField="WebAddress" HeaderText="WebAddress" 
                                SortExpression="WebAddress" />
                            <asp:BoundField DataField="Address" HeaderText="Address" 
                                SortExpression="Address" />
                        </Columns>
                    </asp:GridView>
                </td>
                <td>
                    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
                        DataSourceID="SqlDataSource2">
                        <Columns>
                            <asp:BoundField DataField="PhoneNumber" HeaderText="PhoneNumber" 
                                SortExpression="PhoneNumber" />
                        </Columns>
                    </asp:GridView>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
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
