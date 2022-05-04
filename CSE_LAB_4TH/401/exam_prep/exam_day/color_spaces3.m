%conv 1D
clc;
clear all;
close all;
%input
Rimg=imread('8.jpg');

subplot(2,2,1);
imshow(Rimg)

hsvimg=rgb2hsv(Rimg);
h=hsvimg(:,:,1);
s=hsvimg(:,:,2);
v=hsvimg(:,:,3);

rs=hsv2rgb(hsvimg);
r=rs(:,:,1);
g=rs(:,:,2);
b=rs(:,:,3);
subplot(2,2,2)
imshow(r);

subplot(2,2,3)
imshow(g);
subplot(2,2,4)
imshow(b);

