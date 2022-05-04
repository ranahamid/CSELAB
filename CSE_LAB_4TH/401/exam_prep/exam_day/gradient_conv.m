%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=double(img);

[m n]=size(img);

mx=[-1 -2 -1; 0 0 0; 1 2 1];
my=[-1 0 1; -2 0 2; -1 0 1];

h=filter_conv(img,mx);
v=filter_conv(img,my);
g=sqrt(double(h).^2+double(v).^2);



subplot(2,2,1);
imshow(uint8(img));
title('Original image');
subplot(2,2,2);
imshow(uint8(h));
title('horizontal delp/delx');
subplot(2,2,3);
imshow(uint8(v));
title('vertical delp/dely');
subplot(2,2,4);
imshow(uint8(g));
title('gradient image');





% b =
% 
%      0     0     0     0
%      0    -1     0     0
%      0     0     1     0
%      0     0     0     0
% 
% a
% 
% a =
% 
%     -1     0
%      0     1







% my =
% 
%      0    -1
%      1     0
%      
%      
%      
% my =
% 
%      0     0     0     0
%      0     0    -1     0
%      0     1     0     0
%      0     0     0     0