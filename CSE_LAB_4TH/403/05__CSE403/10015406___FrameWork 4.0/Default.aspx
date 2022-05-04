<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Default.aspx.cs" Inherits="_Default" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="SHORTCUT ICON" href="favicon.ico" />

<link rel="stylesheet" type="text/css" href="style.css" />

    <title></title>
    <style type="text/css">
        .style1
        {
            width: 210px;
        }
        .style2
        {
            width: 240px;
        }
        .style3
        {
            width: 236px;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Student Table</h3>
    
    </div>
    <asp:GridView ID="GridView1" runat="server" CellPadding="4" ForeColor="#333333" 
        GridLines="None">
        <AlternatingRowStyle BackColor="#ffeecf" />
        <EditRowStyle BackColor="#fef5BF" />
        <FooterStyle BackColor="#f00Cf9" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#505Caa" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="#246fBF" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#aFb3a0" />
        <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#f33593" />
        <SortedAscendingCellStyle BackColor="#55F73B" />
        <SortedAscendingHeaderStyle BackColor="#fD95E1" />
        <SortedDescendingCellStyle BackColor="#E20B4F" />
        <SortedDescendingHeaderStyle BackColor="#3800fE" />
    </asp:GridView>
  
    <p>
        <asp:Label ID="Result_Label1" runat="server"></asp:Label>
    </p>
    <h3>
        Inset Data into Table</h3>
     <table style="width:100%;">
            <tr>
                <td class="style1" style="text-align: center">
    <asp:Button ID="Insert_Button1" runat="server" onclick="Insert_Button1_Click" 
        Text="Insert" CssClass="google_button" />
                </td>
                <td>
                    &nbsp;</td>
                <td>
                    &nbsp;</td>
            </tr>
        </table>
    </h3>
    <h3>
        Delete Data from Table</h3>
    <p>
        &nbsp;</p>
<table style="width:100%;">
    <tr>
        <td class="style2" 
            style="line-height: normal; display: table-caption; float: right; background-repeat: no-repeat; background-color: #FFFFFF; font-size: large; font-weight: bold; font-style: normal;">
            <asp:Label ID="Id_delete_Label" runat="server" Text="ID"></asp:Label>
        </td>
        <td>
            <asp:TextBox ID="Id_Delete_TextBox1" runat="server" 
                ontextchanged="Id_Delete_TextBox1_TextChanged" Width="150px" 
                CssClass="div_form"></asp:TextBox>
        </td>
        <td>
            &nbsp;</td>
    </tr>
    <tr>
        <td class="style2" style="text-align: center">
            <asp:Button ID="Delete_Button1" runat="server" onclick="Delete_Button1_Click" 
                Text="Delete" CssClass="google_button" />
        </td>
        <td>
            &nbsp;</td>
        <td>
            &nbsp;</td>
    </tr>
</table>

<h3>Update data into Table</h3>
    <table style="width:100%;">
        <tr>
            <td class="style3" 
                style="line-height: normal; display: table-caption; float: right; background-repeat: no-repeat; background-color: #FFFFFF; font-size: large; font-weight: bold; font-style: normal;">
                ID</td>
            <td style="text-align: left">
                <asp:TextBox ID="Update_TextBox1" runat="server" 
                    Width="150px" CssClass="div_form"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td style="text-align: center" class="style3">
                <asp:Button ID="Update_Button1" runat="server" Text="Update" 
                    onclick="Update_Button1_Click" CssClass="google_button" />
            </td>
            <td>
                &nbsp;</td>
            <td>
                &nbsp;</td>
        </tr>
        </table>
    </form>
</body>
</html>
