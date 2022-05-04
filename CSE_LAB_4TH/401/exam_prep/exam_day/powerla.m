%conv 1D
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);
img=im2double(img);
[M N]=size(img);



c=1;
t=1
for gamma=1:1:4
    b=c*img.^gamma;
    subplot(2,2,t)
    t=t+1
    imshow(b);
end