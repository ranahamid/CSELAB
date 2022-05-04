<%@ Page Language="C#" AutoEventWireup="true" CodeFile="CastVote.aspx.cs" Inherits="CastVote" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
<link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <title></title>
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
    
    <h3>
        Online Polling System User Area-Cast 
        Vote</h3>
        <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
            onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
            ValidationGroup="group2" Width="244px" />
        <br />
        <asp:SqlDataSource ID="SqlDataSource3" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT * FROM [Poll_Option_Table] WHERE ([poll_id] = @poll_id)">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" 
                    Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
        <br />
            <asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
                BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
        <br />
        <asp:SqlDataSource ID="SqlDataSource2" runat="server" 
            ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
            SelectCommand="SELECT [poll_name] FROM [Poll_Table] WHERE ([poll_id] = @poll_id)">
            <SelectParameters>
                <asp:QueryStringParameter Name="poll_id" QueryStringField="poll_id" 
                    Type="Int32" />
            </SelectParameters>
        </asp:SqlDataSource>
            <asp:DetailsView ID="DetailsView1" runat="server" AutoGenerateRows="False" 
                DataSourceID="SqlDataSource2" Height="50px" Width="125px">
                <Fields>
                    <asp:BoundField DataField="poll_name" HeaderText="poll_name" 
                        SortExpression="poll_name" />
                </Fields>
            </asp:DetailsView>
        <br />
        <asp:RadioButtonList ID="option_RadioButtonList1" runat="server" 
            DataSourceID="SqlDataSource3" DataTextField="option_name" 
            DataValueField="poll_option_id">
        </asp:RadioButtonList>
        <br />
        <br />
            <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
                onclick="Home_Button1_Click" Text="Submit" ValidationGroup="group2" 
                Width="244px" />
        <br />
        <br />
        <br />
                    <asp:Button ID="back_to_user_area" runat="server" CssClass="google_button3" 
                        onclick="back_to_user_area_Click" Text="Back to User Area" ValidationGroup="group2" 
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
