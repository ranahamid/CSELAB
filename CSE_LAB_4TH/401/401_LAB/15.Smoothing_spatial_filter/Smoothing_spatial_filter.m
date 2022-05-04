% Smoothing spatial filter
%page=145

clear all;
close all;
img=imread('8.jpg');

%img=imread('moon.tif');
img=rgb2gray(img);

subplot(1,2,1);
imshow(img);
title('Original Image');

%L=[1 2 1;2 4 2;1 2 1];
L=[1 1 1;1 1 1;1 1 1];
total=sum(L(:));

mask=(1/total)*L;


[r c]=size(img);


copy=img;

for i=2:(r-1)
    for j=2:(c-1)
        sum=0;
     
        s=1;
        t=1;
        for m=(i-1):(i+1)
            for n=(j-1):(j+1)
                sum=sum+double( ((img(m,n))*mask(s,t))  );
                t=t+1;
            end
            t=1;
            s=s+1;
        end
    %    sum=sum/total;      
    copy(i,j)=uint8 (sum);
    end
end

subplot(1,2,2);
imshow(copy);
title('Sharpen Image');