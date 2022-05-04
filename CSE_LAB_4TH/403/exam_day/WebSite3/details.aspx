<%@ Page Language="C#" AutoEventWireup="true" CodeFile="details.aspx.cs" Inherits="details" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
</head>
<body>
    <p>
        <br />
    </p>
    <form id="form1" runat="server">
    <p>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" SelectCommand="SELECT contactTable.fullName, contactTable.nickName, contactTable.address, contactTable.dateOfBirth, contactTable.user_id, phoneTable.phoneNumber FROM contactTable INNER JOIN phoneTable ON contactTable.contact_id = phoneTable.contact_id
where (user_id=@user_id and contactTable.contact_id=@contact_id)">
            <SelectParameters>
                <asp:SessionParameter Name="user_id" SessionField="user_id" />
                <asp:QueryStringParameter Name="contact_id" QueryStringField="contact_id" />
            </SelectParameters>
        </asp:SqlDataSource>
    </p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
        DataSourceID="SqlDataSource1">
        <Columns>
            <asp:BoundField DataField="fullName" HeaderText="fullName" 
                SortExpression="fullName" />
            <asp:BoundField DataField="nickName" HeaderText="nickName" 
                SortExpression="nickName" />
            <asp:BoundField DataField="address" HeaderText="address" 
                SortExpression="address" />
            <asp:BoundField DataField="dateOfBirth" HeaderText="dateOfBirth" 
                SortExpression="dateOfBirth" />
            <asp:BoundField DataField="user_id" HeaderText="user_id" 
                SortExpression="user_id" />
            <asp:BoundField DataField="phoneNumber" HeaderText="phoneNumber" 
                SortExpression="phoneNumber" />
        </Columns>
    </asp:GridView>
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
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <div>
    
    </div>
    </form>
</body>
</html>
