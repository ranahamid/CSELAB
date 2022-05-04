%page=167
%Gradient Robert cross difference


clc;
clear all;
close all;

A=imread('8.jpg');
A=rgb2gray(A);

subplot(1,2,1);

imshow(A);
title('Original Image');

operators_x=[-1 0; 0 1];

x_pad=padarray(operators_x,[1 1]);


operators_y=[0 -1; 1 0];

y_pad=padarray(operators_y,[1 1]);


% A =
% 
%      1     2
%      3     4
% B = padarray(A,[1 1]);
% B =
% 
%      0     0     0     0
%      0     1     2     0
%      0     3     4     0
%      0     0     0     0
[r,c]=size(A);

C=double(A);


for i=1:r-2
    for j=1:c-2
  
        %X -direction
       
        Gx=x_pad(3,3)*C(i+2,j+2)+x_pad(2,2)*C(i+1,j+1);
        
        %Y -direction
        Gy=y_pad(3,2)*C(i+2,j+1)+y_pad(2,3)*C(i+1,j+2); 
        
        B(i,j)=uint8(sqrt(Gx.^2+Gy.^2));
    end
end


subplot(1,2,2);
imshow(B);
title('Gradient Image');

