%clc
clear all;
close all;
img=imread('8.jpg');
img=rgb2gray(img);

[M N]=size(img);

s=1;
t=1;

for i=1:M
    for j=1:N
        b(s,t)=img(i,j);
        b(s,t+1)=img(i,j);
        b(s+1,t)=img(i,j);
        b(s+1,t+1)=img(i,j);
        t=t+2;
    end
    t=1;
    s=s+2;
end

figure(1)
imshow(img)
title('Original Image');
figure(2)
imshow(b);
title('Original Image');
