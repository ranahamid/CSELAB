%gray to negetive gray
clc;
clear all;
close all;
img=imread('1.jpg');
img=rgb2gray(img);

[m n]=size(img);

% for i=1:1:m
%     for j=1:1:n
%         b(i,j)=256-1-img(i,j);
%     end
% end
b=255-img;


subplot(2,1,1)
imshow(img)
title('original image');


subplot(2,1,2)
imshow(b)
title('negetive image');
