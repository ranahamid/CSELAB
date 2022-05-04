%image contrast stretching 3

clc;
clear all;
close all;

img1=imread('8.jpg');
%img1=imread('lena.bmp');
img1=rgb2gray(img1);
[r c]=size(img1);

x1=50;
x2=180;

y1=255;
y2=255;

for i=1:r
    for j=1:c
        x_out=img1(i,j);
        if(x_out<x1)
            out_img(i,j)=x_out;
        elseif(x_out>=x1 && x_out<=x2)
                out_img(i,j)=((y2-y1)/(x2-x1))*(x_out)+y1;
        else
                out_img(i,j)=255;
        end
    end
end

subplot(2,1,1);
imshow(img1);
title('Original Image');

subplot(2,1,2);
imshow(out_img);
title('Contrast Image');

        
        
                       