<%@ Page Language="C#" AutoEventWireup="true" CodeFile="all.aspx.cs" Inherits="all" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <form id="form1" runat="server">
    <p>
        <br />
        <asp:Label ID="msg_label" runat="server"></asp:Label>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT contactTable.fullName, contactTable.nickName, phoneTable.phoneNumber, contactTable.contact_id FROM contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id WHERE (contactTable.user_id = @user_id)">
            <SelectParameters>
                <asp:SessionParameter Name="user_id" SessionField="user_id" />
            </SelectParameters>
        </asp:SqlDataSource>
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
            DataKeyNames="contact_id" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="fullName" HeaderText="fullName" 
                    SortExpression="fullName" />
                <asp:BoundField DataField="nickName" HeaderText="nickName" 
                    SortExpression="nickName" />
                <asp:BoundField DataField="phoneNumber" HeaderText="phoneNumber" 
                    SortExpression="phoneNumber" />
                <asp:TemplateField HeaderText="Edit">
                    <ItemTemplate>
                        <asp:LinkButton ID="EditLinkButton1" runat="server" 
                            CommandArgument='<%# Eval("contact_id") %>' onclick="EditLinkButton1_Click">Edit</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Delete">
                    <ItemTemplate>
                        <asp:LinkButton ID="DeleteLinkButton1" runat="server" 
                            CommandArgument='<%# Eval("contact_id") %>' onclick="deletetLinkButton1_Click" 
                            onclientclick="return confirm(&quot;Are you sure&quot;);">Delete</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Details">
                    <ItemTemplate>
                        <asp:LinkButton ID="DetailsLinkButton1" runat="server" 
                            CommandArgument='<%# Eval("contact_id") %>' onclick="detailsLinkButton1_Click">Details</asp:LinkButton>
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
                <asp:Button ID="AddContactButton1" runat="server" 
                    onclick="AddContactButton1_Click" Text="AddContact" Width="114px" />
            </td>
            <td>
                <asp:Button ID="UserAreaButton" runat="server" 
                    onclick="BrowseAllContactButton_Click" Text="UserArea" Width="157px" />
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
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <div>
    
    </div>
    </form>
</body>
</html>
