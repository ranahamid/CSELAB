clc
clear all;
close all;
img=imread('8.jpg');
img=rgb2gray(img);

[M N]=size(img);

s=1;
t=1;


for i=1:2:M
    for j=1:2:N
       b( (i+1)/2,(j+1)/2 )=img(i,j);
    end
end

figure(1)
imshow(img)
title('Original Image');
figure(2)
imshow(b);
title('Original Image');