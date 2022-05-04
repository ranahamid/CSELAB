J = imread('main.bmp');
J = rgb2gray(J);
J = im2double(J);

mean= 0;
var = 0.01;

Noise=sqrt(var).*randn(size(J)) + mean;
Deg_Image = J + Noise;
%   b = a + sqrt(p4)*randn(sizeA) + p3;


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