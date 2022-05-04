<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Details.aspx.cs" Inherits="Details" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title><link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">
        .style1
        {
            width: 383px;
        }
    
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



    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Online Polling System Admin Area-Details view</h3>
        <br />
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
            onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
            ValidationGroup="group2" Width="244px" />
        <br />
        <br />
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT * FROM [Poll_Table] WHERE ([poll_id] = @poll_id)">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" 
                    Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT all [option_name], [count] FROM [Poll_Option_Table] WHERE ([poll_id] = @poll_id)">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" 
                    Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <br />
        <br />
        <br />
        <table style="width:100%;">
            <tr>
                <td class="style1">
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
                        </Columns>
                    </asp:GridView>
                </td>
                <td>
                    <asp:GridView ID="GridView2" runat="server" AutoGenerateColumns="False" 
                        DataSourceID="SqlDataSource2" style="margin-left: 0px">
                        <Columns>
                            <asp:BoundField DataField="option_name" HeaderText="option_name" 
                                SortExpression="option_name" />
                            <asp:BoundField DataField="count" HeaderText="count" SortExpression="count" />
                        </Columns>
                    </asp:GridView>
                </td>
                <td>
                    &nbsp;</td>
            </tr>
            <tr>
                <td class="style1">
                    <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
                        onclick="Home_Button1_Click" Text="Back to Admin Area" ValidationGroup="group2" 
                        Width="244px" />
                </td>
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
