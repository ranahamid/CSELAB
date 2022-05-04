clc;
clear all;
close all;
I = imread('original.tif');
M=0;
V=0.01;
J = imnoise(I,'gaussian',M,V);
figure, imshow(I);
figure, imshow(J);

L=J-I
[r c]=size(J);
k=zeros(r,c);
[k,pdf,cdf]=histequalization(L);

figure,bar(pdf);
figure,bar(cdf);
