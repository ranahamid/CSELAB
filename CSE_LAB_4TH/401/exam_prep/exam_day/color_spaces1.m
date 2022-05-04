%conv 1D
clc;
clear all;
close all;
%input
Rimg=imread('8.jpg');

subplot(2,2,1);
cmyk=255-Rimg;
imshow(cmyk)
subplot(2,2,2);
R=Rimg(:,:,1);

G=Rimg(:,:,2);

B=Rimg(:,:,3);

C=255-R;M=255-G;Y=255-B;
imshow(C);

subplot(2,2,3)
imshow(M);
subplot(2,2,4)
imshow(Y);

