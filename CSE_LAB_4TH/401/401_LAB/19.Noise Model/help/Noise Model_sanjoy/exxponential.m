clear all;
close all;
I = imread('main.bmp');
main = rgb2gray(I);
main=double(main);
%default a=1
a=0.1;
z=1/a;
[M N]=size(main);
noise=exprnd(z,M,N);
ni=main+noise;
figure,
subplot(1,2,1);
imshow(uint8(main));
title('main image');
subplot(1,2,2);
imshow(uint8(ni));
title('Degraded Image');

figure,
hist((noise));
title('Histigram of noise');
%imshow(uint8(J)); 
%min1=min(min(ni));
%max1=max(max(ni));
%y=((ni-min1).*255)./(max1-min1);
% k = -1/a;
% J= J+k*log(1 - rand(M,N));