%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=im2double(img);

[m n]=size(img);

L=[1 1 1;1 1 1;1 1 1];
s=sum(L(:));
mask=L/s;

b=conv2(img,mask);


subplot(2,1,1)
imshow(img);
subplot(2,1,2)
imshow((b));


        
        