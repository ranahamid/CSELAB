%Bit plane slicing

clc;
clear all;
close all;

img=imread('1.jpg')
img=rgb2gray(img); %do not convert to double


[r c]=size(img);

figure(1);
imshow(img);
title('Original Image');


figure(2);
zero_img=img*0;

for k=1:1:8
    for i=1:1:r
        for j=1:1:c
            n=bitget(img(i,j),k);
            b(i,j)=bitset(zero_img(i,j),k,n);
        end
    end
    subplot(4,2,k);
    imshow(b);
    title(['Bit plane slice at bit ',int2str(k)]);
end






