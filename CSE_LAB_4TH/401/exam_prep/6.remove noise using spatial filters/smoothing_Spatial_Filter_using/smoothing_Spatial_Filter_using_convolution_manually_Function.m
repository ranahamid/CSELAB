%smoothing_Spatial_Filter_using_manual_convultaion_Function
clc;
clear alll;
close all;

img=rgb2gray(imread('8.jpg'));

L=[1 1 1;1 1 1;1 1 1];
s=sum(L(:));
mask=(1/9)*(L);


b=Filter_conv3(img,mask);

subplot(1,2,1);
imshow(img);
title('Original input Image');


subplot(1,2,2);
imshow(uint8(b));
title('Smooth output Image');

