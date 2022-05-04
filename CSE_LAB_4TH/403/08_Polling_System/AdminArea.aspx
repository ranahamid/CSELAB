<%@ Page Language="C#" AutoEventWireup="true" CodeFile="AdminArea.aspx.cs" Inherits="AdminArea" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title><link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">

    
h3
    {
        border-left: 1px solid #57a700;
            border-right: 1px solid #57a700;
            border-top: 1px solid #57a700;
            margin: 0 0 10px 0;
            background: #3a3 url('http://localhost:2662/images/div_form/form_heading.gif') repeat-x;
            color:#fff;
		    font-size:20px;
		border-bottom:none;
		    text-align:center;
		    border-bottom:8px ridge #666;
    }



        .style1
        {
            color: #6699FF;
        }
        .style2
        {
            font-size: large;
            background-color: #FFCCFF;
        }
    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Online Polling System Admin Area</h3>
        <p>
            <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
                onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
                ValidationGroup="group2" Width="244px" />
        </p>
        <p>
            <asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
                BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
        </p>
    
    </div>
    <p class="style1">
        <strong><span class="style2">Create New Poll</span></strong></p>
    <p>
        &nbsp;</p>
    <table style="width:100%;">
        <tr>
            <td>
                <asp:Label ID="Label1" runat="server" Text="Poll Name"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_name_TextBox1" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label4" runat="server" Text="Option 1"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin1_TextBox2" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label5" runat="server" Text="Option 2"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin2_TextBox3" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label6" runat="server" Text="Option 3"></asp:Label>
            </td>
            <td>
                <asp:TextBox ID="Poll_optin3_TextBox4" runat="server"></asp:TextBox>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label2" runat="server" Text="Start Time"></asp:Label>
            </td>
            <td>
                <asp:Calendar ID="start_Calendar1" runat="server"></asp:Calendar>
            </td>
            <td>
                &nbsp;</td>
        </tr>
        <tr>
            <td>
                <asp:Label ID="Label3" runat="server" Text="End Time"></asp:Label>
            </td>
            <td>
                <asp:Calendar ID="end_Calendar2" runat="server" 
                    ondayrender="end_Calendar2_DayRender"></asp:Calendar>
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
                <asp:Button ID="Poll_Create_Button1" runat="server" 
                    onclick="Poll_Create_Button1_Click" Text="Create" />
            </td>
            <td>
                <br />
            </td>
            <td>
                &nbsp;</td>
        </tr>
    </table>
    <asp:Panel ID="Panel1" runat="server">
        <br />
    </asp:Panel>
    <p>
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT * FROM [Poll_Table]"></asp:SqlDataSource>
    </p>
    <p>
        <strong><span class="style2">Last created Poll</span></strong></p>
    <p>
            <asp:Label ID="Msg_Label2" runat="server" BackColor="#CCCCCC" 
                BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" 
            ForeColor="Black"></asp:Label>
        </p>
    <p>
        <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
            DataKeyNames="poll_id" DataSourceID="SqlDataSource1">
            <Columns>
                <asp:BoundField DataField="poll_id" HeaderText="poll_id" InsertVisible="False" 
                    ReadOnly="True" SortExpression="poll_id" />
                <asp:BoundField DataField="poll_name" HeaderText="poll_name" 
                    SortExpression="poll_name" />
                <asp:BoundField DataField="start_time" HeaderText="start_time" 
                    SortExpression="start_time" />
                <asp:BoundField DataField="end_time" HeaderText="end_time" 
                    SortExpression="end_time" />
                <asp:TemplateField HeaderText="Delete">
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton2" runat="server" 
                            CommandArgument='<%# Eval("poll_id") %>' onclick="LinkButton2_Click">Delete</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Details">
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton3" runat="server" 
                            CommandArgument='<%# Eval("poll_id") %>' onclick="LinkButton3_Click">Details</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="Update">
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton4" runat="server" 
                            CommandArgument='<%# Eval("poll_id") %>' onclick="LinkButton4_Click1">Update</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
            </Columns>
        </asp:GridView>
    </p>
    <p>
        &nbsp;</p>
    </form>
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
</body>
</html>
