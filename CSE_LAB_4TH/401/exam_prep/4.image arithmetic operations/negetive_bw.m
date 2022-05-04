%black white to negetive black white
clc;
clear all;
close all;
img=imread('1.jpg');
img=im2bw(img);

[m n]=size(img);

for i=1:1:m
    for j=1:1:n
        if(img(i,j)==1)
            b(i,j)=0;
        else
            b(i,j)=1;
        end
    end
end

subplot(2,1,1)
imshow(img)
title('original image');


subplot(2,1,2)
imshow(b)
title('negetive image');
