%Smoothing spatial filter using manual convulation
%page=145

clear all;
close all;
img=imread('8.jpg');

%img=imread('moon.tif');
img=rgb2gray(img);

subplot(1,2,1);
imshow(img);
title('Original Image');

%L=[1 2 1;2 4 2;1 2 1];
L=(1/9)*[1 1 1;1 1 1;1 1 1];

out_img=uint8(conv_img(L,img));

subplot(1,2,2);
imshow(out_img);
title('Smoothing Image');