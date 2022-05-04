%image averaging by adding noise


clc;
clear all;
close all;


% assuming there are files named: '1.tif','2.tif',...'1000.tif'
im1 = imread('2.tif');


im2= imnoise(im1,'gaussian',0,0.025);
im3= imnoise(im1,'gaussian',0,0.050);
im4= imnoise(im1,'gaussian',0,0.075);
im5= imnoise(im1,'gaussian',0,0.125);

sum=double(im1)+double(im2)+double(im3)+double(im4)+double(im5); %must be double or it's look black
avg_img=(sum/5);%must be uint8 or it' look white


figure(1)

subplot(2,1,1)
imshow(im1);
title('Original Image');

subplot(2,1,2)
imshow(avg_img);
title('Average Image');


figure(2)
subplot(2,2,1)
imshow(im2)
title('Noise Image 1');

subplot(2,2,2)
imshow(im3)
title('Noise Image 2');

subplot(2,2,3)
imshow(im4)
title('Noise Image 3');

subplot(2,2,4)
imshow(im5)
title('Noise Image 4');





