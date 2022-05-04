<%@ Page Title="Home Page" Language="C#" AutoEventWireup="true"
    CodeFile="Default.aspx.cs" Inherits="_Default"%>

<head>

<link rel="Stylesheet" type="text/css" href="Styles/Site.css" />

    <style type="text/css">
        .style6
        {
            width: 137px;
        }
        </style>

</head>

<div id="total" align="left">
<form id="form1" runat="server">
<br />
<asp:GridView ID="GridView1" runat="server" BackColor="White" 
    BorderColor="#E7E7FF" BorderStyle="None" BorderWidth="1px" CellPadding="3" 
    GridLines="Horizontal">
    <AlternatingRowStyle BackColor="#F7F7F7" />
    <FooterStyle BackColor="#B5C7DE" ForeColor="#4A3C8C" />
    <HeaderStyle BackColor="#4A3C8C" Font-Bold="True" ForeColor="#F7F7F7" />
    <PagerStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" HorizontalAlign="Right" />
    <RowStyle BackColor="#E7E7FF" ForeColor="#4A3C8C" />
    <SelectedRowStyle BackColor="#738A9C" Font-Bold="True" ForeColor="#F7F7F7" />
    <SortedAscendingCellStyle BackColor="#F4F4FD" />
    <SortedAscendingHeaderStyle BackColor="#5A4C9D" />
    <SortedDescendingCellStyle BackColor="#D8D8F0" />
    <SortedDescendingHeaderStyle BackColor="#3E3277" />
</asp:GridView>


<h3>
    Inset Data into Table</h3>
<p>
            <asp:Button ID="Insert_Button1" runat="server" Text="Insert" 
                onclick="Insert_Button1_Click" />
        </p>
<h3>
    


    &nbsp;<p>
<asp:Label ID="Result_Label1" runat="server" ></asp:Label>
</p>
<h3>
    Delete Data from Table</h3>
<p>
    &nbsp;</p>
<table style="width:100%;">
    <tr>
        <td class="style6">
            <asp:Label ID="Id_delete_Label" runat="server" Text="ID"></asp:Label>
        </td>
        <td>
            <asp:TextBox ID="Id_Delete_TextBox1" runat="server" 
                ontextchanged="Id_Delete_TextBox1_TextChanged"></asp:TextBox>
        </td>
        <td>
            &nbsp;</td>
    </tr>
    <tr>
        <td class="style6" style="text-align: right">
            <asp:Button ID="Delete_Button1" runat="server" onclick="Delete_Button1_Click" 
                Text="Delete" />
        </td>
        <td>
            &nbsp;</td>
    </tr>
</table>







<h3>
    Update Data in Table</h3>
<p>
    &nbsp;</p>
<table style="width:100%;">
    <tr>
        <td class="style6">
            <asp:Label ID="Id_update_Label" runat="server" Text="ID"></asp:Label>
        </td>
        <td>
            <asp:TextBox ID="Id_update_TextBox1" runat="server" ></asp:TextBox>
        </td>
        <td>
            &nbsp;</td>
    </tr>
    <tr>
        <td class="style6" style="text-align: right">
            <asp:Button ID="update_Button1" runat="server" onclick="update_Button1_Click" 
                Text="Update" />
        </td>
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
        </form>
</div>