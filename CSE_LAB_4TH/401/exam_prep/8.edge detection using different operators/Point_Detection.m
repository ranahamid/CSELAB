%point detection

clc;
clear all;
close all;
img=imread('point2.tif');
img=double(img);%must be double
[h w]=size(img);
m=[1 1 1;1 -8 1;1 1 1];

%T=input('Threshold');
T=100;
b=zeros(h,w);

for i=2:h-1
    for j=2:w-1
        s=sum(sum((img(i-1:i+1,j-1:j+1)).*m));
        if(abs(s>=T))
            b(i,j)=255;
        end
    end
end


subplot(1,2,1);
imshow(uint8(img));
title('Original Image');

subplot(1,2,2);
imshow(uint8(b));
title('Point detected Image');