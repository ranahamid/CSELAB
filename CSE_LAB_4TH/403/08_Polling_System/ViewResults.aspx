<%@ Page Language="C#" AutoEventWireup="true" CodeFile="ViewResults.aspx.cs" Inherits="ViewResults" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title><link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">




        .style1
        {
            color: #6699FF;
        }
        </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
            <asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
                BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
        <br />
    <h3>
        Online Polling System User Area-View 
        Results</h3>
        <br />
        <asp:SqlDataSource ID="SqlDataSource1" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" SelectCommand="SELECT  option_name ,sum(count) as Total FROM Poll_Option_Table 
where poll_id=@poll_id
GROUP BY option_name ">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT [poll_name] FROM [Poll_Table] WHERE ([poll_id] = @poll_id)">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" 
                    Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
            onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
            ValidationGroup="group2" Width="244px" />
        <br />
        <br />
        <br />
        <br />
            <asp:DetailsView ID="DetailsView1" runat="server" AutoGenerateRows="False" 
                DataSourceID="SqlDataSource2" Height="50px" Width="125px">
                <Fields>
                    <asp:BoundField DataField="poll_name" HeaderText="poll_name" 
                        SortExpression="poll_name" />
                </Fields>
            </asp:DetailsView>
        <br />
            <asp:GridView ID="GridView1" runat="server" AutoGenerateColumns="False" 
                DataSourceID="SqlDataSource1">
                <Columns>
                    <asp:BoundField DataField="option_name" HeaderText="option_name" 
                        SortExpression="option_name" />
                    <asp:BoundField DataField="Total" HeaderText="Total" ReadOnly="True" 
                        SortExpression="Total" />
                </Columns>
            </asp:GridView>
        <br />
        <br />
        <br />
            <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
                onclick="Home_Button1_Click" Text="Back to User Area" ValidationGroup="group2" 
                Width="244px" />
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
