%Unsharp masking with k=1
%HighBoost Filtering Image with k=5 (k>1)
%De emphasize Image with k=-5 (k<1)

clear all;
close all;
A=imread('8.jpg');

%img=imread('moon.tif');
A=rgb2gray(A);

subplot(2,3,1);
imshow(A);
title('Original Image');



%to blur image

%L=[1 2 1;2 4 2;1 2 1];

L=(1/9)*[1 1 1;1 1 1;1 1 1];

blur_img=uint8(conv_img2(L,A));
%end of blur image 



subplot(2,3,2);
imshow(blur_img);
title('Blurred Image');


Gmask_img=A-blur_img;
subplot(2,3,3);
imshow(Gmask_img);
title('G mask Image');

k=1;
unsharp_img=A+k*Gmask_img;
subplot(2,3,4);
imshow(unsharp_img);
title('Unsharp Image');



k=5;
highboost_img=A+k*Gmask_img;
subplot(2,3,5);
imshow(highboost_img);
title('HighBoost Filtering Image');



k=-5;
de_emphsize_img=A+k*Gmask_img;
subplot(2,3,6);
imshow(de_emphsize_img);
title('De-emphasizes  Image');

