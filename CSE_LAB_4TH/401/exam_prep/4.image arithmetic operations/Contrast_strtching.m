%Contrast strtching

clc;
clear all;
close all;

img=imread('1.jpg')
img=rgb2gray(img); 

[r c]=size(img);

x1=50;
x2=150;

y1=70;
y2=160;

for i=1:r
    for j=1:c
        n=img(i,j);
        if(n>=0 && n<=x1)
            b(i,j)=(y1/x1)*n;
        elseif(n>=x1 && n<=x2)
            b(i,j)=((y2-y1)/(x2-x1))*n+y1;
        elseif(n>=x2 && n<=255)
            b(i,j)=((255-y2)/(255-x2))*n+y2;
        end
    end
end

subplot(2,1,1);
imshow(img);
title('Original Image');


subplot(2,1,2);
imshow(b);
title('Contrast stretching Image');