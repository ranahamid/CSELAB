clc;
close all;
clear all;

main = imread('main.bmp');
Input_img=rgb2gray(main);
Input_img = double(Input_img);

[M N]=size(Input_img);

B=10;
mu=2;
sigma=10;
Noise=normrnd(mu,sigma,M,N);

%Noise=(b-a)*rand(M,N);
Deg_Image = Input_img+Noise;


subplot(3,2,1);
imshow(uint8(Input_img));
title('main image');

subplot(3,2,2);
hist(Input_img);
title('Histogram of main image');

subplot(3,2,3);
imshow(Noise);
imshow(uint8(Noise));
title('Noise image');


subplot(3,2,4);
hist(Noise);
title('Histogram of Noise image');


subplot(3,2,5);
imshow(uint8(Deg_Image));
title('Degraded image');


subplot(3,2,6);
hist(Deg_Image);
title('Histogram of Degraded image');



