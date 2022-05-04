close all;
clear all;
main= imread('main.bmp');
J = rgb2gray(main);
B=15;
J=double(J);
[m,n]=size(J);
noise =raylrnd(B,m,n);
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
figure
imshow(uint8(noise))
%imnoise
%a=0.0;
%b=1.0;
%De=J+a+(-1*b*log(1-randn(size(J))))^(0.5);