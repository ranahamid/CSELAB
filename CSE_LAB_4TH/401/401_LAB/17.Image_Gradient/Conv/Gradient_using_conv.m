%page=167
%Gradient Using manually convolution 2d


clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);
A=imread('rice.tif');


subplot(2,2,1);
imshow(A);
title('Original Image');

mx=[-1 -2 -1; 0 0 0; 1 2 1];

my=[-1 0 1; -2 0 2; -1 0 1];


%H = conv2(double(A),double(mx));
%V = conv2(double(A),double(my));

H=conv_img2(double(mx),double(A)) ;
%H=corr_img(double(mx),double(A)) ;

V=conv_img2(double(my),double(A));


subplot(2,2,2);
imshow(uint8(H));
title('Horizontal delp/delx');

subplot(2,2,3);
imshow(uint8(V));
title('Vertical delp/dely');


subplot(2,2,4);
imshow(uint8(sqrt(H.^2 + V.^2)));
%imshow(uint8(H));
title('Gradient Image');




