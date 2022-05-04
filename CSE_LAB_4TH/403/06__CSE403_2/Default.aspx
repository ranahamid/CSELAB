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
        </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Student Table</h3>
    
    </div>
    <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
        ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
        
        SelectCommand="SELECT  Student_Table.ID, Student_Table.Name , Student_Table.Roll, Student_Table.Reg_No, Student_Table.Fathers_Name, Student_Table.Date_Of_Birth, Student_Table.Email, Student_Table.Phone_No, Student_Table.Edu_Qualification, Student_Table.Gender, Student_Table.Age, District_Table.Name, Student_Table.Address FROM District_Table INNER JOIN Student_Table ON District_Table.id = Student_Table.District">
    </asp:SqlDataSource>
    <asp:GridView ID="GridView1"  runat="server" CellPadding="4" ForeColor="#333333" 
        GridLines="None" AutoGenerateColumns="False" DataKeyNames="ID" 
        DataSourceID="SqlDataSource2">
        <AlternatingRowStyle BackColor="White" />
        <Columns>
            <asp:BoundField DataField="ID" HeaderText="ID" SortExpression="ID" 
                InsertVisible="False" ReadOnly="True" />
            <asp:BoundField DataField="Name" HeaderText="Name" SortExpression="Name" />
            <asp:BoundField DataField="Roll" HeaderText="Roll" SortExpression="Roll" />
            <asp:BoundField DataField="Reg_No" HeaderText="Reg_No" 
                SortExpression="Reg_No" />
            <asp:BoundField DataField="Fathers_Name" HeaderText="Fathers_Name" 
                SortExpression="Fathers_Name" />
            <asp:BoundField DataField="Date_Of_Birth" HeaderText="Date_Of_Birth" 
                SortExpression="Date_Of_Birth" />
            <asp:BoundField DataField="Email" HeaderText="Email" 
                SortExpression="Email" />
            <asp:BoundField DataField="Phone_No" HeaderText="Phone_No" 
                SortExpression="Phone_No" />
            <asp:BoundField DataField="Edu_Qualification" HeaderText="Edu_Qualification" 
                SortExpression="Edu_Qualification" />
            <asp:BoundField DataField="Gender" HeaderText="Gender" 
                SortExpression="Gender" />
            <asp:BoundField DataField="Age" HeaderText="Age" 
                SortExpression="Age" />
            <asp:BoundField DataField="Name1" HeaderText="Name1" 
                SortExpression="Name1" />
            <asp:BoundField DataField="Address" HeaderText="Address" 
                SortExpression="Address" />
            <asp:TemplateField HeaderText="Edit">
                <ItemTemplate>
                    <asp:LinkButton ID="LinkButton1" runat="server"  CommandArgument='<%# Eval("ID") %>' 
                        onclick="LinkButton1_Click">Edit</asp:LinkButton>
                </ItemTemplate>
            </asp:TemplateField>
            <asp:TemplateField HeaderText="Delete">
                <ItemTemplate>
                    <asp:LinkButton ID="LinkButton2" runat="server" 
                        CommandArgument='<%# Eval("ID") %>' onclick="LinkButton2_Click" 
                        onclientclick="return confirm(&quot;Are you sure?&quot;);">Delete</asp:LinkButton>
                </ItemTemplate>
            </asp:TemplateField>
        </Columns>
        <EditRowStyle BackColor="#2461BF" />
        <FooterStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <HeaderStyle BackColor="#507CD1" Font-Bold="True" ForeColor="White" />
        <PagerStyle BackColor="#2461BF" ForeColor="White" HorizontalAlign="Center" />
        <RowStyle BackColor="#EFF3FB" />
        <SelectedRowStyle BackColor="#D1DDF1" Font-Bold="True" ForeColor="#333333" />
        <SortedAscendingCellStyle BackColor="#F5F7FB" />
        <SortedAscendingHeaderStyle BackColor="#6D95E1" />
        <SortedDescendingCellStyle BackColor="#E9EBEF" />
        <SortedDescendingHeaderStyle BackColor="#4870BE" />
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
    
    <p>
        &nbsp;</p>
    </form>
</body>
</html>
