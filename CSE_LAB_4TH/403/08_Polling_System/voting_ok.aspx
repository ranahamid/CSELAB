<%@ Page Language="C#" AutoEventWireup="true" CodeFile="voting_ok.aspx.cs" Inherits="voting_ok" %>

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml">
<head runat="server">
    <title></title>
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



        h3
    {
    margin:0 0 10px 0;
		background:#3a3 url(../images/div_form/form_heading.gif) repeat-x;		
		color:#fff;
		font-size:20px;
		border:1px solid #57a700;
		border-bottom:none;
		text-align:center;
		border-bottom:8px ridge #666;
    }



.google_button5{
	
	padding: 2px;
	background-color:#12304c;
	border:2px double #4ff3c5;
	font:bold 92% Arial;
	color:#5ee;
	text-transform:uppercase;	
	width:244px;
	
}



.google_button3{
	
	padding: 2px;
	background-color:#2270fc;
	border:2px double #ff13c5;
	font:bold 92% Arial;
	color:#eee;
	text-transform:uppercase;	
	width:244px;
	
}

    </style>
</head>
<body>
    <form id="form1" runat="server">
    <div>
    
        <h3>
            Online Polling System Admin Area</h3>
    
    </div>
    <p>
            <asp:Button ID="LogOut_Button2" runat="server" CssClass="google_button5" 
                onclick="LogOut_Button2_Click" style="margin-left: 759px" Text="Log Out" 
                ValidationGroup="group2" Width="244px" />
        </p>
    <h1>
        Thanks for voting.</h1>
    <p>
        &nbsp;</p>
    <p>
            <asp:Button ID="Home_Button1" runat="server" CssClass="google_button3" 
                onclick="Home_Button1_Click" Text="Back to User Area" ValidationGroup="group2" 
                Width="244px" />
        </p>
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
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
    <p>
        &nbsp;</p>
</body>
</html>
