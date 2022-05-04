%image subtraction in 1 image by 128

clear all;
close all;

%image histogram original image

image1 = imread('8.jpg');
Img1=rgb2gray(image1);

Img2=imsubtract(Img1,128);
%Img2=uint8(double(Img1)-128);


subplot(2,1,1)
imshow(Img1);
subplot(2,1,2)
imshow(Img2);