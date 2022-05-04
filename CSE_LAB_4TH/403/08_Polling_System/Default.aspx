<%@ Page Title="Polling System" Language="C#"  AutoEventWireup="true"
    CodeFile="Default.aspx.cs" Inherits="_Default" %>


<head><link rel="stylesheet" type="text/css" href="styleSheet.css" />
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
            width: 185px;
        }
        .style2
        {
            width: 234px;
        }
        

    </style>
</head>



<form id="form1" runat="server">
<div>
    <h3>
        Online Polling System Log in Form</h3>
</div>
<br />
<asp:Label ID="Msg_Label1" runat="server" BackColor="#CCCCCC" 
    BorderColor="#FFCCFF" CssClass="style1" Font-Bold="False" ForeColor="Black"></asp:Label>
<br />
<table align="center" cellpadding="1" cellspacing="1" frame="above" 
    style="width:100%;">
    <tr>
        <td class="style1">
            <asp:Label ID="userName_label" runat="server" Text="User Name"></asp:Label>
        </td>
        <td class="style2">
            <asp:TextBox ID="userName_textbox" runat="server" BorderColor="#FF66FF" 
                CssClass="div_form" ValidationGroup="group1"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="userName_RequiredFieldValidator1" 
                runat="server" ControlToValidate="userName_textbox" Display="Dynamic" 
                ErrorMessage="Name is Required" SetFocusOnError="True" ValidationGroup="group1">Name is Required</asp:RequiredFieldValidator>
        </td>
    </tr>
    <tr>
        <td class="style1">
            <asp:Label ID="password_text" runat="server" Text="Password"></asp:Label>
        </td>
        <td class="style2">
            <asp:TextBox ID="password_textbox" runat="server" BorderColor="#FF66FF" 
                CssClass="div_form" TextMode="Password" ValidationGroup="group1"></asp:TextBox>
        </td>
        <td>
            <asp:RequiredFieldValidator ID="Password_RequiredFieldValidator1" 
                runat="server" ControlToValidate="password_textbox" Display="Dynamic" 
                ErrorMessage="Password Required"></asp:RequiredFieldValidator>
        </td>
    </tr>
</table>
<p>
    &nbsp;</p>
<table style="width:100%;">
    <tr>
        <td>
            <asp:Button ID="Login_Button1" runat="server" CssClass="google_button5" 
                onclick="Login_Button1_Click" Text="Log in" ValidationGroup="group1" />
        </td>
        <td>
            &nbsp;</td>
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
            &nbsp;</td>
        <td>
            &nbsp;</td>
        <td>
            &nbsp;</td>
    </tr>
</table>
<asp:SqlDataSource ID="SqlDataSource1" runat="server" 
    ConnectionString="<%$ ConnectionStrings:ConnectionString %>" 
    SelectCommand="SELECT * FROM [User_Table]"></asp:SqlDataSource>
</form>



