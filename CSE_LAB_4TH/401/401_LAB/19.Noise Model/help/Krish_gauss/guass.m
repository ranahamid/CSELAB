clc;
clear all;
close all;
img=imread('main.bmp');
img=rgb2gray(img);
si=size(img);
img2=im2double(img);

[img3 min max]=normalization(img2);

a =0; b = 1;
x = a + (b-a) * rand(si(1), si(2));
% m =(a + b)/2;
% s = 0.95;
m=mean2(x);
s=std2(x);

f = gauss_distribution(x,m,s);

img4=img2+f;
[p1 min max]=normalization(img4);

img5=Denormalization(p1,0,255);

figure(10105419);
subplot(2,2,1);
imshow(img);
title('original image');

subplot(2,2,2);
imshow(uint8(img5));
title('Degradate image');

subplot(2,2,4);
plot(x,f,'.')
%(hist(f));
grid on
title('probability density function of Gaussian noise');
xlabel('Randomly produced numbers')
ylabel('Gauss Distribution')
