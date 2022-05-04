%Edge detected image-Sobel
clc;
clear all;
close all;
img=imread('edge1.tif');
img=double(img);%must be double

[h w]=size(img);
mx=[-1 -2 -1;0 0 0 ; 1 2 1];
my=[-1 0 1;-2 0 2;-1 0 1];


%T=input('Threshold');
T=50;
b=zeros(h,w);

for i=2:h-1
    for j=2:w-1
        h=sum(sum((img(i-1:i+1,j-1:j+1)).*mx));

        if(h>=T)
            b(i,j)=255;
        end
        v=sum(sum ((img(i-1:i+1,j-1:j+1)).*my));
        if(v>=T)
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