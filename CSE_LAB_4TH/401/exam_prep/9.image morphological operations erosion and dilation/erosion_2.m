%erosion-2c
clc;
clear all;
close all;
img=imread('Fig0905(a)(wirebond-mask).tif');
[M N]=size(img);

se=strel('disk',11);
nHood=getnhood(se);
[m n]=size(nHood);

p=floor(m/2);
q=floor(n/2);

P=zeros(M+2*p,N+2*q);
P(p+1:M+p,q+1:N+q)=img;

for i=1:M
    for j=1:N
        subImg=P(i:i+2*p,j:j+2*q);
        g(i,j)=min(subImg(:));
    end
end
subplot(1,2,1);
title('Original Image');
imshow(img);

subplot(1,2,2);
title('erode Image');
imshow((g)); %0-255



