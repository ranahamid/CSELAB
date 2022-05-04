% p3 mean 
% p4 variance
close all;
clear all;
I = imread('main.bmp');
J = rgb2gray(I);
MU= 5;
SIGMA =10;
J =double(J);
[m n]=size(J);
noise =normrnd(MU,SIGMA,m,n);
ni=noise+J;
figure,
subplot(1,2,1);
imshow(uint8(J));
title('main image');
subplot(1,2,2);
imshow(uint8(ni));
title('Degraded image');
figure,
hist(noise);
title('Histigram of noise');
%imnoise
%b = J + sqrt(p4).*randn(size(J)) + p3;
%p3= 0;
%p4 = .05;