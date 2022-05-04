%Highboost filter

clc;
clear all;
close all;
img=rgb2gray(imread('8.jpg'));

L=[1 2 1;1 1 1; 1 2 1];
s=sum(L(:));
mask=L/s;

%blur_img=uint8(filter_conv4(img,mask));
blur_img=uint8(filter_corr4 (img,mask));

g_mask=img-blur_img;

k=1;
unsharp_img=img+k*g_mask;
k=5
highboost_img=img+k*g_mask;
k=-5;
defacto_img=img+k*g_mask;


subplot(2,3,1);
imshow(img);
title('Origingal Image');


subplot(2,3,2);
imshow(uint8(blur_img));
title('Blured Image');


subplot(2,3,3);
imshow(uint8(g_mask));
title('G Mask');

subplot(2,3,4);
imshow(uint8(unsharp_img));
title('unsharp_img');

subplot(2,3,5);
imshow(uint8(highboost_img));
title('highboost_img');

subplot(2,3,6);
imshow(uint8(defacto_img));
title('defacto_img');