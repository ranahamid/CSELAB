%conv 1D
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[M N]=size(img);

zimg=img*0;


for k=1:1:8
    for i=1:1:M
        for j=1:1:N
            n=bitget(img(i,j),k);
            b(i,j)=bitset(zimg(i,j),k,n);
        end
    end
    subplot(2,4,k)
   
    imshow(b);
end
            