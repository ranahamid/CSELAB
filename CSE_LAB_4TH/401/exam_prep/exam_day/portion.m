%conv 1D
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);
img=im2double(img);
[M N]=size(img);




   
    b=img(:,1:N/2);   
    subplot(3,1,1);
    imshow(b);

        
      b=img(1:M/2,1:N/2);   
    subplot(3,1,2);
    imshow(b);   