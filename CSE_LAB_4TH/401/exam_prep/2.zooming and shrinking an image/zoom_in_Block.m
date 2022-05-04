%Image shirking
%image zoom out by block
clc;
clear all;
close all;

img=imread('8.jpg');
img=rgb2gray(img);

[m,n]=size(img);


p=1;
q=1;
for i=1:1:m
    for j=1:1:n
        b(p,q)=img(i,j);
        b(p,q+1)=img(i,j);
        b(p+1,q)=img(i,j);
        b(p+1,q+1)=img(i,j);
        q=q+2;
    end
    p=p+2;
    q=1;
end


figure(1);
imshow(img);
title('Original Image');

figure(2)
imshow(b);
title('Zoom In Image');