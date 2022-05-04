%Smoothing Filter--Simple
%page=145

clear all;
close all;
img=imread('8.jpg');
img=rgb2gray(img);

subplot(1,2,1);
imshow(img);
title('Original Image');


mask=(1/9)*ones(3,3);


[r c]=size(img);


copy=img;

for i=2:(r-1)
    for j=2:(c-1)
        sum=0;
        for m=(i-1):(i+1)
            for n=(j-1):(j+1)
                sum=sum+double(img(m,n));
            end
        end
    sum=sum/9;    
    copy(i,j)=uint8 (sum);
    end
end

subplot(1,2,2);
imshow(copy);
title('Sharpen Image');