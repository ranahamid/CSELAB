%Bit plane slicing

clc;
clear all;
close all;

img1=imread('1.jpg');
img1=rgb2gray(img1);
[r c]=size(img1);

figure(1);
imshow(img1);
title('Input Image');

zero_img=img1*0;

figure(2);
for i=1:8
    for i_index=1:r
        for j_index=1:c
            n=bitget(img1(i_index,j_index),i);
            b_img(i_index,j_index)=bitset(zero_img(i_index,j_index),i,n);
        end
    end
    
    subplot(2,4,i);
    imshow(b_img);
    title(['Bit Plane for Bit=',int2str(i)]);
end
