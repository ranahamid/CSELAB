function startTime()
{
var today=new Date();
var h=today.getHours();
var m=today.getMinutes();
var s=today.getSeconds();
// add a zero in front of numbers<10

var now = new Date();
var day = now.getDay();
		var date = now.getDate();
		var year = now.getFullYear();
		var month = now.getMonth();
		var days = new Array();
			days[0] = "Sunday";
			days[1] = "Monday";
			days[2] = "Tuesday";
			days[3] = "Wednesday";
			days[4] = "Thursday";
			days[5] = "Friday";
			days[6] = "Saturday";
		


			
m=checkTime(m);
s=checkTime(s);
h=checkTime(h);


 document.getElementById('txt').innerHTML=days[day] + ", " + date + "/" + (month +1) + "/"  +
 year + "<br />  "+h+":"+m+":"+s;
t=setTimeout(function(){startTime()},500);
}

function checkTime(i)
{
if (i<10)
  {
  i="0" + i;
  }
return i;
}