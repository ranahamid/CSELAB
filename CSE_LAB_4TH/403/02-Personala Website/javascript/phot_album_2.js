
var imageTag;

var images;

var index;


var des;



function init()
{

	imageTag = document.getElementById("image");

	images = new Array();

	des = new Array();

	images[0] = "album/1.jpg";
	des[0] = "2nd Year 1st";

	images[1] = "album/2.jpg";
	des[1] = "2nd Year 2nd";

	images[2] = "album/3.jpg";
	des[2] = "2nd Year 3rd";

	
	images[3] = "album/4.jpg";
	des[3] = "3rd Year 1st";
	
	images[4] = "album/5.jpg";
	des[4] = "3rd Year 2nd";
	
	images[5] = "album/6.jpg";
	des[5] = "3rd Year 3rd";
	
	images[6] = "album/7.jpg";
	des[6] = "1st Year 1st";
	
	images[7] = "album/8.jpg";
	des[7] = "1st Year 2nd";
	
	images[8] = "album/9.jpg";
	des[8] = "1st Year 3rd";

	index = 0;

	document.getElementById('des').innerHTML = des[index];
}



function next(){

	
	index=Math.floor(Math.random()*images.length)
	
	imageTag.setAttribute("src", images[index]);

	document.getElementById('des').innerHTML = des[index];
}

