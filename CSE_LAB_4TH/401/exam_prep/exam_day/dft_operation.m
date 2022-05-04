%conv 1D
clc;
clear all;
close all;
%input
img=imread('6.jpg');
img=rgb2gray(img);


subplot(4,1,1)
imshow(img)

f=dft_img(img);





subplot(2,2,1)
imshow(img)


subplot(2,2,2)
imshow(abs(f),[24 10000])



subplot(2,2,3)
imshow(abs(log(f)),[-1 5])

F=uint8(idft_img(f));
subplot(2,2,4)
imshow(F)
