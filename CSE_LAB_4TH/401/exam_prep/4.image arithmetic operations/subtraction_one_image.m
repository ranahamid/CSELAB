%image subtraction of one image
clc;
clear all;
close all;
img=imread('1.jpg');
img=rgb2gray(img);

b=imsubtract(img,128);
%b=img-128;

subplot(2,1,1)
imshow(img)
title('original image');


subplot(2,1,2)
imshow(b)
title('subtracted image');
