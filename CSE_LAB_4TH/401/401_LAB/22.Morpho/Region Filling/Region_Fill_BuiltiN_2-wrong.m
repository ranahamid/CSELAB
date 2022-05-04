clc;
close all;
clear all;

I=imread('Fig9.16(a).jpg'); 
I=im2bw(I);
[M,N]=size(I);

x0=zeros(M,N);

for i=1:M
    for j=1:N
        if(I(i,j)==0)
        x0(i,j)=1;
        end
    end
end

se=strel('disk',11); 
for i=1:5
    BW1=imdilate(x0,se);
    BW3=BW1 & (1-I);
    x0=BW3;
end;

BW5=max(x0,I);

subplot(1,2,1);
title('Original Image');
imshow(I);


subplot(1,2,2);
imshow((x0));
title('Region fill Image');
