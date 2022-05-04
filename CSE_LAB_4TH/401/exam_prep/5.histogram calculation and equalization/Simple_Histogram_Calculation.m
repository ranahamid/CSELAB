%Simple histogram calculation
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

count=zeros(1,256);

for i=0:255
    numbers=find(i==img(:));
    count(i+1)=length(numbers);
end

subplot(2,2,1);
imshow(img);
title('Input image');


subplot(2,2,2);
plot(count);
title('Ploted  Histogram');

subplot(2,2,3:4);
stem(count);
title('stem Histogram');


