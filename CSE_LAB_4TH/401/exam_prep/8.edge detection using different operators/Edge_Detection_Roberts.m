%Edge detected image-Robers cross
clc;
clear all;
close all;
img=imread('edge.tif');
img=double(img);%must be double

[h w]=size(img);
mx=[-1 0;0 1];
my=[0 -1;1 0];
mx=padarray(mx,[1 1]);
my=padarray(my,[1 1]);

%T=input('Threshold');
T=5;
b=zeros(h,w);

for i=1:h-2
    for j=1:w-2
        h=mx(2,2)*img(i+1,j+1)+mx(3,3)*img(i+2,j+2);
        if(h>=T)
            b(i,j)=255;
        end
        v=my(2,3)*img(i+1,j+2)+my(3,2)*img(i+2,j+1);
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