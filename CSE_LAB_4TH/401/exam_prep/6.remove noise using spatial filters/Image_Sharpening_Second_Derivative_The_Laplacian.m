%Image_Sharpening_Second_Derivative_The_Laplacian
clc;
clear all;
close all;
img=rgb2gray(imread('8.jpg'));


[h w]=size(img);


L=[0 -1 0; -1 4 -1; 0 -1 0 ];
L=[-1 -1 -1; -1 8 -1; -1 -1 -1 ];
L=[1 1 1; 1 -8 1; 1 1 1 ];
L=[0 1 0; 1 -4 1; 0 1 0 ];
mask=L;
if(mask(2,2)<0)
    c=-1;
else
    c=1;
end


for i=2:h-1
    for j=2:w-1
        sum=0;
        s=1;
        t=1;
        for m=i-1:i+1
            for n=j-1:j+1
                sum=sum+double(img(m,n))*mask(s,t); %ekhane double use korte hobe...
                t=t+1;                              %im2double korle hobe na....
            end
            t=1;
            s=s+1;
        end
        b(i,j)=img(i,j)+uint8(c*sum);
    end
end
 
subplot(1,2,1);
imshow(img);
title('Original image');

subplot(1,2,2);
imshow((b));
title('Sharpenign image');
