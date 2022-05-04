%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=im2double(img);

[m n]=size(img);

mask=[1 1 1;1 -8 1; 1 1 1];
if(mask(2,2)<0)
    c=-1;
else
    c=1;
end





for i=2:m-1
    for j=2:n-1
      s= sum(sum((img(i-1:i+1,j-1:j+1)).*mask));
      b(i,j)=img(i,j)+c*s;
    end
end



subplot(2,1,1)
imshow(img);
subplot(2,1,2)
imshow((b));


        
        