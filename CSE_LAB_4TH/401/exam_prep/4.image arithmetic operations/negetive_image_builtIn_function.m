%gray to negetive gray
clc;
clear all;
close all;
img=imread('1.jpg');
%img=rgb2gray(img);

[m n]=size(img);

b=imcomplement(img)

subplot(2,1,1)
imshow(img)
title('original image');


subplot(2,1,2)
imshow(b)
title('negetive image');
