%Power law Gamma Transformation

clc;
clear all;
close all;

img1=imread('8.jpg');
%img1=imread('lena.bmp');
img1=rgb2gray(img1);
[r c]=size(img1);

figure(1);
subplot(3,2,1);
imshow(img1);
title('Input Image');

double_img=im2double(img1);

test=2;
const=1;

for c=0.8:-0.2:0
    powerImg=const*double_img.^c;
    subplot(3,2,test);
    test=test+1;
    imshow(powerImg);
    title(['Power Law Image c=',num2str(c)]);
end



figure(2);

test=1;
for c=1:1:6
    powerImg=const*double_img.^c;
    subplot(3,2,test);
    test=test+1;
    imshow(powerImg);
    title(['Power Law Image c=',num2str(c)]);
end
