%show one part of image
clc;
clear all;
close all;
img1=imread('input.tif');
%img1=rgb2gray(img1);

figure(1);
imshow(img1)
title('original image');

[m n]=size(img1);

figure(2);
b=img1(:,1:n/2);
imshow(b)
title('image portion 1');


figure(3);
c=img1(1:m/2,:);
imshow(c)
title('image portion 2');

figure(4);
d=img1(m/2:m,n/2:n);
imshow(d)
title('image portion 3');




