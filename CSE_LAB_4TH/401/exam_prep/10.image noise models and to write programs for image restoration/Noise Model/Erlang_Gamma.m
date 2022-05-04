%Erlang

clc;
clear all;
close all;
img=imread('main.bmp');
img=rgb2gray(img);
img=double(img);
[M N]=size(img)

A=5;
B=15;
Noise=gamrnd(A,B,M,N);
deg_img=img+Noise;

%normalization
maxx=max(max(deg_img(:)));
minn=min(min(deg_img(:)));

deg_img=((deg_img-minn).*255)./(maxx-minn);
%end

subplot(3,2,1);
imshow(uint8(img));
title('Original Image');

subplot(3,2,2);
hist(img);
title('Hist of Original Image');



subplot(3,2,3:4);
hist(Noise);
title('Hist of Noise');


subplot(3,2,5);
imshow(uint8(deg_img));
title('Degraded Image');


subplot(3,2,6);
hist(deg_img);
title('hist of degeraded Image');




