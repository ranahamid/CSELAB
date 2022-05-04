<%@ Page Language="C#" AutoEventWireup="true" CodeFile="UserArea.aspx.cs" Inherits="UserArea" %>

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
        


    </style>
</head>
<body>
    <h3>
        Online Polling System User Area</h3>
    <form id="form1" runat="server">
    <div>
    
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
            onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
            ValidationGroup="group2" Width="244px" />
    
        <br />
        List of Poll Name<br />
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT * FROM [Poll_Table]"></asp:SqlDataSource>
        <br />
        <h4>
            <asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
                BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
        </h4>
        <br />
        <br />
        <asp:GridView ID="GridView2" runat="server" AutoGenerateColumns="False" 
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
                <asp:TemplateField HeaderText="Cast Vote">
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton1" runat="server" 
                            CommandArgument='<%# Eval("poll_id") %>' onclick="LinkButton1_Click">Cast Vote</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
                <asp:TemplateField HeaderText="View Results">
                    <ItemTemplate>
                        <asp:LinkButton ID="LinkButton2" runat="server" 
                            CommandArgument='<%# Eval("poll_id") %>' onclick="LinkButton2_Click">View Results</asp:LinkButton>
                    </ItemTemplate>
                </asp:TemplateField>
            </Columns>
        </asp:GridView>
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
