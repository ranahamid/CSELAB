%page=167
%Using Built in convolution 2d


clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);
A=imread('rice.tif');
subplot(1,2,1);

imshow(A);
title('Original Image');

mx=[-1 -2 -1; 0 0 0; 1 2 1];
my=[-1 0 1; -2 0 2; -1 0 1];


H = conv2(double(A),double(mx));
V = conv2(double(A),double(my));


subplot(1,2,2);
imshow(uint8(sqrt(H.^2 + V.^2)));
title('Gradient Image');




