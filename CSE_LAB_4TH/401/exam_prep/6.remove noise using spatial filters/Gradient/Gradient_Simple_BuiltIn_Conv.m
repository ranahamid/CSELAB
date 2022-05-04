%Gradinet image-167 by conv

clc;
clear all;
close all;
img=imread('rice.tif');

mx=[-1 -2 -1; 0 0 0; 1 2 1];
my=[-1 0 1; -2 0 2; -1 0 1];

h=conv2(double(img),double(mx));
v=conv2(double(img),double(my));
g=sqrt(double(h).^2+double(v).^2);

subplot(2,2,1);
imshow(img);
title('Original image');
subplot(2,2,2);
imshow(uint8(h));
title('horizontal delp/delx');
subplot(2,2,3);
imshow(uint8(v));
title('vertical delp/dely');
subplot(2,2,4);
imshow(uint8(g));
title('gradient image');


