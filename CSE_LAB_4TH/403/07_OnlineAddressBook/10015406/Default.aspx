<%@ Page Title="Online Address Book" Language="C#"  AutoEventWireup="true"
    CodeFile="Default.aspx.cs" Inherits="_Default" %>

<head>

<link rel="stylesheet" type="text/css" href="styleSheet.css" />
    <style type="text/css">

h3
    {
        border-left: 1px solid #57a700;
            border-right: 1px solid #57a700;
            border-top: 1px solid #57a700;
            margin: 0 0 10px 0;
            background: #3a3 url('http://localhost:1236/images/div_form/form_heading.gif') repeat-x;
            color:#fff;
		    font-size:20px;
		border-bottom:none;
		    text-align:center;
		    border-bottom:8px ridge #666;
    }


    </style>
</head>


<form id="form1" runat="server">
<p>
    &nbsp;</p>
<h3>
    Online Address Book</h3>
<p>
    <asp:Label ID="Message_Label1" runat="server" BackColor="#A8ACFF" 
        style="font-size: medium"></asp:Label>
    </p>
<table style="width:100%;">
    <tr>
        <td>
    <asp:Button ID="Registration_Button1" runat="server" CssClass="google_button2" 
         Text="Registration" onclick="Registration_Button1_Click1" Width="244px" />
        </td>
        <td>
    <asp:Button ID="LogIn_Button2" runat="server" CssClass="google_button3" 
        onclick="LogIn_Button2_Click" Text="Log in" Width="244px" />
        </td>
        <td>
    <asp:Button ID="UserArea_Button3" runat="server" CssClass="google_button4" 
        onclick="UserArea_Button3_Click" Text="User Area" Width="244px" />
        </td>
    </tr>
</table>
<p>
    &nbsp;</p>
</form>


