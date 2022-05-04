%conv 1D
clc;
clear all;
close all;
%input
img=imread('edge.tif');

subplot(1,2,1);
imshow(img)
subplot(1,2,2);

mask=[-1 2 -1;-1 2 -1;-1 2 -1];
[m n]=size(img);

T=50;

img=double(img);%must be double not im2double

b=zeros(m,n);

for i=2:m-1
    for j=2:n-1
        s= sum(sum((img(i-1:i+1,j-1:j+1)).*mask))
        if(s>=T)
            b(i,j)=255;
        end
    end
end
imshow(uint8(b));




