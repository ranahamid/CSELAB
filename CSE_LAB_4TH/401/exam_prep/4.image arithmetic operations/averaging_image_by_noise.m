%image averaging by adding noise

clc;
clear all;
close all;
img1=imread('input.tif');
%img1=rgb2gray(img1);

figure(1);
subplot(2,1,1)
imshow(img1)
title('original image');

im1=imnoise(img1,'gaussian',0,0.01);
im2=imnoise(img1,'gaussian',0,0.02);
im3=imnoise(img1,'gaussian',0,0.03);
im4=imnoise(img1,'gaussian',0,0.04);

img_avg=(double(im1)+double(im2)+double(im3)+double(im4))/4; 
%image must be double or else look black



subplot(2,1,2)
imshow(uint8(img_avg))
title('average image');

figure(2);
subplot(2,2,1)
imshow(im1)
title('Noise Image 1');

subplot(2,2,2)
imshow(im2)
title('Noise Image 2');

subplot(2,2,3)
imshow(im3)
title('Noise Image 3');

subplot(2,2,4)
imshow(im4)
title('Noise Image 4');


