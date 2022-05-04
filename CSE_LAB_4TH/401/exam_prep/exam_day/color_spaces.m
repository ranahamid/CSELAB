%conv 1D
clc;
clear all;
close all;
%input
Rimg=imread('8.jpg');

subplot(2,2,1);
imshow(Rimg)
subplot(2,2,2);
R=Rimg(:,:,1);

G=Rimg(:,:,2);

B=Rimg(:,:,3);
imshow(R);

subplot(2,2,3)
imshow(G);
subplot(2,2,4)
imshow(B);

