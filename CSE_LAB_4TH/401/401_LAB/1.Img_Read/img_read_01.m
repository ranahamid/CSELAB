%image read operation

clc;
clear all;
close all;

I=imread('bt.JPG');

subplot(2,1,1);
imshow(I);
title('Original Image');

S=size(I);

subplot(2,1,2);
b=rgb2gray(I);
imshow(b);
title('Gray Image');



c=I(b);
imshow(c);

