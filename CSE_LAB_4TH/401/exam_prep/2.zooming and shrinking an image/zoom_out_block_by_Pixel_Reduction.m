%Image shirking
%image zoom out by block
clc;
clear all;
close all;

img=imread('6.jpg');
%img=rgb2gray(img);

[m,n]=size(img);

for i=1:2:m
    for j=1:2:n
        b(  (i+1)/2,(j+1)/2  )=img(i,j);
    end;
end

figure(1);
imshow(img);
title('Original Image');

figure(2)
imshow(b);
title('Shirkned Image');