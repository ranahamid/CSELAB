
var imageTag;

var images;

var index;




function init()
{

	imageTag = document.getElementById("image");

	images = new Array();

	images[0] = "album/1.jpg";

	images[1] = "album/2.jpg";

	images[2] = "album/3.jpg";
	images[3] = "album/4.jpg";
	images[4] = "album/5.jpg";
	images[5] = "album/6.jpg";
	images[6] = "album/7.jpg";
	images[7] = "album/8.jpg";
	images[8] = "album/9.jpg";
	

	index = 0;

}



function next(){

	if(index == images.length-1)
	{

		index = 0;

	}
	 else 
	{

		index++;

	}

	imageTag.setAttribute("src", images[index]);

}

