%conv 1D
clear all;
close all;

img=imread('5.jpg');
img=rgb2gray(img);
img1=imnoise(img,'gaussian',0,0.01);
img2=imnoise(img,'gaussian',0,0.005);
img3=imnoise(img,'gaussian',0,0.02);
img4=imnoise(img,'gaussian',0,0.015);
b=double(double(img1)+double(img2)+double(img3)+double(img4))/4;
imshow(uint8(b));