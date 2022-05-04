clc;
close all;
clear all;

main = imread('main.bmp');
Input_img=rgb2gray(main);
Input_img = double(Input_img);

[M N]=size(Input_img);

a=90
b=160

Noise=a+(b-a)*rand(M,N);

Deg_Image=Noise+Input_img;

%Image Normalization : 0 to 255
min_N=min(min(Deg_Image));
max_N=max(max(Deg_Image));
Deg_Image=((Deg_Image-min_N).*255)./(max_N-min_N);




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



 

