<%@ Page Language="C#" AutoEventWireup="true" CodeFile="AllContacts.aspx.cs" Inherits="AllContacts" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <title></title>
    
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
<h3>
    Online Address Book -AllContacts</h3>
    
    </div>
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
        
        
        SelectCommand="SELECT Contacts_Table.Contact_id, Contacts_Table.FullName, Contacts_Table.NickName, Contacts_Table.DateOfBirth, PhoneNumber_Table.PhoneNumber, Contacts_Table.WebAddress, Contacts_Table.Address FROM Contacts_Table INNER JOIN PhoneNumber_Table ON Contacts_Table.Contact_id = PhoneNumber_Table.Contact_id WHERE (Contacts_Table.User_id = @User_id2)">
        <SelectParameters>
            <asp:SessionParameter Name="User_id2" SessionField="user_id" Type="String" />
        </SelectParameters>
    </asp:SqlDataSource>
    <asp:Label ID="Message_Label" runat="server" BackColor="#EEEEEE" 
        Font-Size="X-Large"></asp:Label>
    <br />
    <br />
    <br />
    <asp:Label ID="Contacts_msg_Label1" runat="server"></asp:Label>
    <p>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
            DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="FullName" HeaderText="FullName" 
                    SortExpression="FullName" />
                <asp:BoundField DataField="DateOfBirth" HeaderText="DateOfBirth" 
                    SortExpression="DateOfBirth" />
                <asp:BoundField DataField="PhoneNumber" HeaderText="PhoneNumber" 
                    SortExpression="PhoneNumber" />
                <asp:BoundField DataField="Address" HeaderText="Address" 
                    SortExpression="Address" />
                <asp:TemplateField HeaderText="Edit">
                    <ItemTemplate>
                        <asp:LinkButton ID="Edit_LinkButton1" runat="server" 
                            CommandArgument='<%# Eval("Contact_id") %>' onclick="Edit_LinkButton1_Click">Edit</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Delete">
                    <ItemTemplate>
                        <asp:LinkButton ID="Delete_LinkButton1" runat="server" 
                            CommandArgument='<%# Eval("Contact_id") %>' 
                            onclick="Delete_LinkButton1_Click" 
                            onclientclick="return confirm(&quot;Are you sure to delete this contact?&quot;);">Delete</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Details">
                    <ItemTemplate>
                        <asp:LinkButton ID="Details_LinkButton1" runat="server" 
                            CommandArgument='<%# Eval("Contact_id") %>' onclick="Details_LinkButton1_Click">Details</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
            </Columns>
        </asp:GridView>
    </p>
    <p>
        &nbsp;</p>
    <table style="width:100%;">
        <tr>
            <td>
        <asp:Button ID="MyUserArea_Button2" runat="server" CssClass="google_button2" 
            onclick="MyUserArea_Button2_Click" Text="My User Area" ValidationGroup="group2" 
                    Width="244px" />
            </td>
            <td>
        <asp:Button ID="Home_Button1" runat="server" CssClass="google_button5" 
            onclick="Home_Button1_Click" Text="Home" ValidationGroup="group2" Width="244px" />
            </td>
            <td>
        <asp:Button ID="ExportCsv_Button2" runat="server" CssClass="google_button3" 
            onclick="ExportCsv_Button2_Click" Text="Export To CSV" ValidationGroup="group2" 
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
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <br />
                <br />
                <br />
                <br />
            </td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    </form>
</body>
</html>
