%gray to binary
clc;
clear all;
close all;
img=imread('1.jpg');
img=rgb2gray(img);
[m,n]=size(img);
for i=1:1:m
    for j=1:1:n
        if(img(i,j)>=0 && img(i,j)<=127)
            b(i,j)=0;
        else
            b(i,j)=1;
        end
    end
end

subplot(2,1,1)
