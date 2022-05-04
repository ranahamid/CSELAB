%show image portion of an image

clc;
clear all;
close all;

img1=imread('8.jpg');
%img1=imread('lena.bmp');
img1=rgb2gray(img1);
[r c]=size(img1);

subplot(2,2,1);
imshow(img1);
title('Original Image');


out_img=img1(:,1:c/2);
subplot(2,2,2);
imshow(out_img);
title('Image Portion 1');


out_img=img1(1:r/2,1:c/2);
subplot(2,2,3);
imshow(out_img);
title('Image Portion 2');


out_img=img1(1:r/2,:);
subplot(2,2,4);
imshow(out_img);
title('Image Portion 3');

        
        
                       