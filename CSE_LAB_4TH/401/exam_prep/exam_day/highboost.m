%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);


[m n]=size(img);

L=[1 1 1;1 1 1;1 1 1];
s=sum(L(:));
mask=L/s;

b=filter_corr4(img,mask);

gmask=img-b;
k=1;
img1=img+k*gmask;

k=5;
img3=img+k*gmask;

k=-5;
img2=img+k*gmask;





subplot(4,1,1)
imshow(img);
subplot(4,1,2)
imshow((img1));
subplot(4,1,3)
imshow((img2));
subplot(4,1,4)
imshow((img3));

        
        