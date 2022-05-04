<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">

<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<title>Rana Hamid</title>

<link href="favicon.ico" rel="shourtcut icon">
<link rel="stylesheet" type="text/css" href="css/style.css">
<script type="text/javascript" src="javascript/date_time.js">
</script>
</head>


<body onload="startTime()">


<div id="total">
<div id="banner">
	<p>My Contacts Information</p>
</div>

<div id="header">
	
	

		<ul id="header_link" >
			<li><a href="index.htm"><span>Home</span></a></li>
			<li><a href="aca_info.htm"><span>Academic Information</span></a></li>
			<li><a href="interest.htm"><span>Interests</span></a></li>
			<li><a href="photo_album.htm"><span>Photo Album</span></a></li>
			<li><a href="links.htm"><span>Useful Links</span></a></li>
			<li><a href="contact.htm"><span>Contact</span></a></li>
		</ul>
	
</div> <!-- header  -->



<div id="left1">

<?php
$to="ranahamid007@gmail.com";
$sub="Mail:-";
$comments=$_POST["Comments"];
$header="from : ".$_POST["Name"].$_POST["email"].$_POST["web"];

if(mail($to,$sub,$comments,$header))
	echo"Send successfully...";
else
	echo "Couldn't Send..."
	

?>

<a href="contact.htm" >Go Back</a>


</div> <!-- left1  -->



















<div id="right1">


<div id="googel_div">
<form method="get" action="http://www.google.com/search">
	<div style="border:1px solid green;padding:4px;width:12em;">
		<table border="0" cellpadding="0">
			 <tr>
				  <td>
						<input type="text"   name="q" size="25"
						 maxlength="255" value="" />
						
				  </td>
			 </tr>
			 <tr>	  
				  <td>
				  		<input id="google_button" type="submit" value="Google Search" />
				  </td>	
			 </tr>
		</table>
	</div>
</form>

</div><!--google --> 


<div id="time">
<div id="txt"></div>

</div><!--time --> 







<div id="quote">
	<h3>Favorite Quote</h3>
	<ul>
		<li>You must be the change you wish to see in the world.</li>
		<li>There comes a time when one must take a position that is neither safe, nor politic, nor popular, but he must take it because his conscience tells him it is right...</li>
		<li>It is better to light one candle than to curse the darkness.</li>
		<li>Anyone who has never made a mistake has never tried anything new.</li>
		<li>The first and greatest commandment is, Don't let them scare you.</li>
		<li>We don't live in a world of reality, we live in a world of perceptions.</li>
	</ul>
</div>	






</div><!-- Right  -->




















<div id="footer">
 <p><span id="copyright"><div id="img_footer">Footer</div><br />Copyright (c) 2013, Spider Inc, Rajshahi,Bangladesh.</span></p>
</div> <!-- Footer  -->


</div> <!-- Total  -->
</body>

</html>