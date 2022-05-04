%conv 1D
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[M N]=size(img);

b=255-img;

imshow(b);
        
            