%conv 1D
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[m n]=size(img);

count=zeros(1,256);

for p=0:255
        numbers=find(p==img(:))
        count(p+1)=length(numbers)/(m*n);
end

stem(count)
plot(count)