<%@ Page Language="C#" AutoEventWireup="true" CodeFile="Error.aspx.cs" Inherits="Error" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">

<link rel="SHORTCUT ICON" href="favicon.ico" />

<link rel="stylesheet" type="text/css" href="style.css" />
    <title></title>
    <style type="text/css">



.google_button{
	
	padding: 2px;
	background-color:#90305c;
	border:2px double #5513c5;
	font:bold 92% Arial;
	color:#fff;
	text-transform:uppercase;
            text-align: center;
        }

    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h1 align="center" style="color: #FF0000">
    
        Error!<br />
            <br />
    
        </h1>
    
    </div>
    <h3>
        Please Input Correctly.</h3>
    <p>
    <asp:Button ID="Home_Button1" runat="server" onclick="Home_Button1_Click" 
        Text="Home" CssClass="google_button" ValidationGroup="group2" Width="136px" />
    </p>
    </form>
</body>
</html>
