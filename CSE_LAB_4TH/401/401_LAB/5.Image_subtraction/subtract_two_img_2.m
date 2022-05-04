%image subtraction of 2 image -- one from another

clc;
clear all;
close all;

%image subtraction
clear all;
close all;

%image histogram original image


image1 = imread('ref.tif');
image2 = imread('input.tif');

Img2=image2-image1;
%Img2=uint8(double(Img1)-128);


subplot(2,2,1)
imshow(image2);
title('input image');

subplot(2,2,2)
imshow(image1);
title('Reference image');

subplot(2,2,3)
imshow(uint8(Img2));

title('subtracted image');