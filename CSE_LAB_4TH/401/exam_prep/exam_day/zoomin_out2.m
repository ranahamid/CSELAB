clc
clear all;
close all;
img=imread('8.jpg');
img=rgb2gray(img);

[M N]=size(img);

s=1;
t=1;


for i=1:2:M-1
    for j=1:2:N-1
           sum=min([ img(i,j),  img(i,j+1),img(i+1,j), img(i+1,j+1) ]);
       b(t,s)=sum;
       s=s+1;
    end
    s=1;
    t=t+1;
end

figure(1)
imshow(img)
title('Original Image');

figure(2)
imshow((b));
title('Original Image');
