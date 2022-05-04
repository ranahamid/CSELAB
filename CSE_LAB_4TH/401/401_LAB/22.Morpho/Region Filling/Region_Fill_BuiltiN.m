clc;
close all;
clear all;

BW4 = imread('Fig9.16(a).jpg');

BW5=imfill(BW4,'holes');

subplot(1,2,1);
title('Original Image');
imshow(BW4);

subplot(1,2,2);
title('Region fill Image');
imshow(BW5);