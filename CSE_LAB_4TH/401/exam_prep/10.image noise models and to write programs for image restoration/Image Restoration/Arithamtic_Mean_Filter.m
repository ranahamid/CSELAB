%Arithmatic mean filter
clc;
clear all;
close all;
img=imread('Fig5.07(a).jpg');
img=double(img); %must double

m=3;
n=3;
[h w]=size(img);

b=img;

for i=2:h-1
    for j=2:w-1
        sum=0;
        for p=i-1:i+1
            for q=j-1:j+1
                sum=sum+img(p,q);
            end
        end
        b(i,j)=sum/(m*n);
    end
end

subplot(1,2,1);
imshow(uint8(img));
title('Original Image');


subplot(1,2,2);
imshow(uint8(b));
title('Restored Image');

