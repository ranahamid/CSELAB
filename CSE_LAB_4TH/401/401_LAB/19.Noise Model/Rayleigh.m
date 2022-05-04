clc;
close all;
clear all;

main = imread('main.bmp');
Input_img=rgb2gray(main);
Input_img = double(Input_img);

[M N]=size(Input_img);

B=10;
Noise=raylrnd(B,M,N);
%R = raylrnd(B) returns a matrix of random numbers chosen from the Rayleigh
%distribution with scale parameter B.


Deg_Image = Input_img+Noise;
%Image Normalization : 0 to 255
min_N=min(min(Deg_Image));
max_N=max(max(Deg_Image));
Deg_Image=((Deg_Image-min_N).*255)./(max_N-min_N);
%end of Normalization

subplot(3,2,1);
imshow(uint8(Input_img));
title('main image');

subplot(3,2,2);
hist(Input_img);
title('Histogram of main image');

subplot(3,2,3:4);
hist(Noise);
title('Histogram of Noise image');


subplot(3,2,5);
imshow(uint8(Deg_Image));
title('Degraded image');


subplot(3,2,6);
hist(Deg_Image);
title('Histogram of Degraded image');


%imnoise

 

