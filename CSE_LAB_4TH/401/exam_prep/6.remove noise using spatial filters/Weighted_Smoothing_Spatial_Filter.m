%Smoothing spatial filter
clc;
clear all;
close all;
img=rgb2gray(imread('8.jpg'));

[h w]=size(img);

L=[1 1 1;1 1 1;1 1 1];
s=sum(L(:));
mask=L/s;
disp(mask);

for i=2:h-1
    for j=2:w-1
        sum=0;
        s=1;
        t=1;
        for m=i-1:i+1
            for n=j-1:j+1
                sum=sum+(img(m,n)*mask(s,t))/mask(s,t);
                t=t+1;
            end
            t=1;
            s=s+1;
        end
        b(i,j)=sum;
    end
end
 
subplot(1,2,1);
imshow(img);
title('Original image');

subplot(1,2,2);
imshow(b);
title('Equalized image');
