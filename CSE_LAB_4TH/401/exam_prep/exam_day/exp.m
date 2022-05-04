%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=double(img)
[m n]=size(img);
a=10;
b=5;
mu=10
noise=exprnd(mu,m,n);
degimg=img+noise;

%normalization

minn=min(degimg(:))
maxx=max(degimg(:))

degimg=((degimg-minn)*255)./(maxx-minn);
%end
subplot(1,2,1)
imshow(uint8(img))
subplot(1,2,2)
imshow(uint8(degimg));
