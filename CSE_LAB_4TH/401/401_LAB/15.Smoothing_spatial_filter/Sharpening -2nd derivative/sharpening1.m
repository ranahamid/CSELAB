%using second derivative for image sharpening - the laplacian 
%page 161
%mask 1

clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);

subplot(1,2,1);
imshow(A);
title('Original Image');

L=[0 1 0; 1 -4 1; 0 1 0 ];
if(L(2,2)<0)
    C_into=-1;
else
    C_into=1;
end


[r,c]=size(A);
B=zeros(r,c);
for i=2:(r-1)
    for j=2:(c-1)
        
        sum1=L(1,1)*A(i-1,j-1)+L(1,2)*A(i-1,j)+L(1,3)*A(i-1,j+1);
        sum2=L(2,1)*A(i,j-1)+L(2,2)*A(i,j)+L(2,3)*A(i,j+1);
        sum3=L(3,1)*A(i+1,j-1)+L(3,2)*A(i+1,j)+L(3,3)*A(i+1,j+1);
        sum=sum1+sum2+sum3;
        C(i,j)=A(i,j)+uint8(C_into*sum);
    end
end

subplot(1,2,2);
imshow(C);
title('Sharp Image');