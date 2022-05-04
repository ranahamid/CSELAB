%Log Transformation
clc
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);
img=im2double(img);

subplot(2,2,1);
imshow(img);
title('origingal imaga');

for c=1:3
    b=c*log(1+img);
    subplot(2,2,c+1);
    imshow(b);
    title(['Log transformation c=',int2str(c)]);
end

