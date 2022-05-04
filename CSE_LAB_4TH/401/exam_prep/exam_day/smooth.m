%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=im2double(img);

[m n]=size(img);

L=[1 1 1;1 1 1; 1 1 1];
s=sum(L(:));
mask=L/s;
b=img;
for i=2:m-1
    for j=2:n-1
        b(i,j)=sum(sum((img(i-1:i+1,j-1:j+1)).*mask ));
    end
end



subplot(2,1,1)
imshow(img);
subplot(2,1,2)
imshow((b));


        
        