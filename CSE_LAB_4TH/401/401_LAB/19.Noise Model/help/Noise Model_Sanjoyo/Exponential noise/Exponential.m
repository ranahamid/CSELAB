clear all;
close all;
J = imread('main.bmp');
J = rgb2gray(J);
J= im2double(J);

%default a=1
a=5;
[M N]=size(J);

k = -1/a
Noise = k*log(1 - rand(M,N));
        
Deg_Image = J + Noise;


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

%imnoise