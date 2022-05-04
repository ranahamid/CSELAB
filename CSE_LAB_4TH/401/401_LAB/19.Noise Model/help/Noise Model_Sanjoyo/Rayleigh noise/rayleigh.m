close all;
clear all;
main= imread('main.bmp');
J = rgb2gray(main);
a=0.0;
b=1.0;
J = im2double(J);
Noise=a+(-1*b*log(1-randn(size(J)))).^(0.5);
Deg_Image=J+Noise;

subplot(3,2,1);
imshow(J);
title('main image');

subplot(3,2,2);
hist(J);
title('Histogram of main image');

subplot(3,2,3);
imshow(Noise);
title('Noise image');


subplot(3,2,4);
hist(Noise);
title('Histogram of Noise image');


subplot(3,2,5);
imshow(Deg_Image);
title('Degraded image');


subplot(3,2,6);
hist(Deg_Image);
title('Histogram of Degraded image');

