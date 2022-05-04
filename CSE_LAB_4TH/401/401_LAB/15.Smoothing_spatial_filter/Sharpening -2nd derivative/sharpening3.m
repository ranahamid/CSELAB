%using second derivative for image sharpening - the laplacian 
%page 161
%mask 3

clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);

subplot(1,2,1);
imshow(A);
title('Original Image');

L=[0 -1 0; -1 4 -1; 0 -1 0 ];
if(L(2,2)<0)
    C_into=-1;
else
    C_into=1;
end


[r,c]=size(A);
B=zeros(r,c);


for i=2:(r-1)
    for j=2:(c-1)
        m=double(A(i,j));
        
        a1=double(A(i-1,j-1));
        a2=double(A(i-1,j));
        a3=double(A(i-1,j+1));
        
        a4=double(A(i,j-1));
        a5=double(A(i,j+1));
        
        a6=double(A(i+1,j-1));
        a7=double(A(i+1,j));
        a8=double(A(i+1,j+1));
        
        sum=m*L(2,2)+L(1,1)*a1+L(1,2)*a2+L(1,3)*a3+L(2,1)*a4+L(2,3)*a5+L(3,1)*a6+L(3,2)*a7+L(3,3)*a8;
        
        %do in this format not in the above 2 way
        
       
        C(i,j)=A(i,j)+uint8(C_into*sum);
    end
end

subplot(1,2,2);
imshow(C);
title('Sharp Image');