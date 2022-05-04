%Log transformation

clc;
clear all;
close all;

img1=imread('8.jpg');
%img1=imread('lena.bmp');
img1=rgb2gray(img1);
[r c]=size(img1);

figure(1);

subplot(2,2,1);
imshow(img1);
title('Input Image');

double_img=im2double(img1);

for c=1:3
    logImg=c*log(1+double_img);
    subplot(2,2,c+1);
    imshow(logImg);
    title(['Log Image c=',int2str(c)]);
end


