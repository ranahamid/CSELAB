%page=167
%Gradient Sobel operation


clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);

subplot(1,2,1);

imshow(A);
title('Original Image');

mx=[-1 -2 -1; 0 0 0; 1 2 1];
my=[-1 0 1; -2 0 2; -1 0 1];

[r,c]=size(A);

C=double(A);


for i=1:r-2
    for j=1:c-2
  
        %X -direction
        Gx1=mx(1,1)*C(i,j)+mx(1,2)*C(i,j+1)+mx(1,3)*C(i,j+2); 
        Gx2=mx(2,1)*C(i+1,j)+mx(2,2)*C(i+1,j+1)+mx(2,3)*C(i+1,j+2);
        Gx3=mx(3,1)*C(i+2,j)+mx(3,2)*C(i+2,j+1)+mx(3,3)*C(i+2,j+2);
        Gx=Gx1+Gx2+Gx3;
        
        %Y -direction
        Gy1=my(1,1)*C(i,j)+my(1,2)*C(i,j+1)+my(1,3)*C(i,j+2);
        Gy2=my(2,1)*C(i+1,j)+my(2,2)*C(i+1,j+1)+my(2,3)*C(i+2,j+2);
        Gy3=my(3,1)*C(i+2,j)+my(3,2)*C(i+2,j+1)+my(3,3)*C(i+2,j+2);
        Gy=Gy1+Gy2+Gy3; 
        B(i,j)=uint8(sqrt(Gx.^2+Gy.^2));
    end
end


subplot(1,2,2);
imshow(B);
title('Gradient Image');

