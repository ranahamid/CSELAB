%conv 1D
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[M N]=size(img);


c=1;

    for j=1:1:3
    b=c*log(1+img)    
    subplot(3,1,j);
    imshow(b);
    
    end
        
            