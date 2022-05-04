%conv 1D
clear all;
close all;

img=imread('1.jpg');
img=im2bw(img);

[M N]=size(img);

b=1-img;

imshow(b);
        
            