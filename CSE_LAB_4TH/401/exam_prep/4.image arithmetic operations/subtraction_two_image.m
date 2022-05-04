%image subtraction of one image
clc;
clear all;
close all;
img1=imread('input.tif');
%img1=rgb2gray(img1);

img2=imread('ref.tif');
%img2=rgb2gray(img2);


b=(img1.-img2);
%b=img-128;

subplot(1,3,1)
imshow(img1)
title(' image 1');


subplot(1,3,2)
imshow(img2)
title(' image 2');


subplot(1,3,3)
imshow(b)
title(' subtracted image');
