%Image shirking
%image zoom out by block
clc;
clear all;
close all;

img=imread('8.jpg');
img=rgb2gray(img);

[m,n]=size(img);

k=1;
l=1;

for i=1:2:m-1
    for j=1:2:n-1
       
        sum=[ img(i,j),  img(i,j+1),img(i+1,j), img(i+1,j+1) ];
        b(k,l)=max(sum);
        l=l+1;
       
    end
    k=k+1;
    l=1;     %remember this
    
end

figure(1);
imshow(img);
title('Original Image');

figure(2)
imshow(b);
title('Shirkned Image');