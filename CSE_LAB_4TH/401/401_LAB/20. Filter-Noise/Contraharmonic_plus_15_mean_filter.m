%Contraharmonic  mean  Filter
%page=323
clc;
clear all;
close all;

img=imread('Fig5.08(a).jpg');
%img=rgb2gray(img);



img=double(img);
[x y] = size(img);
m=3;
n=3;
Output=img;

Q=1.5;

%computation
for i=2:(x-1)
    for j=2:(y-1)
        
        sum1=img(i-1,j-1)^(Q+1) + img(i-1,j)^(Q+1) + img(i-1,j+1)^(Q+1)+img(i,j-1)^(Q+1)   + img(i,j)^(Q+1)   + img(i,j+1)^(Q+1)+img(i+1,j-1)^(Q+1) + img(i+1,j)^(Q+1) + img(i+1,j+1)^(Q+1);
        sum2=img(i-1,j-1)^(Q) + img(i-1,j)^(Q) + img(i-1,j+1)^(Q)+img(i,j-1)^(Q)   + img(i,j)^(Q)   + img(i,j+1)^(Q)+img(i+1,j-1)^(Q) + img(i+1,j)^(Q) + img(i+1,j+1)^(Q);
        
       
        Output(i,j)=sum1/sum2 ;
    end
end

%end of computation

subplot(1,2,1);
imshow(uint8(img));
title('Original Image');


subplot(1,2,2);
imshow( uint8(Output));
title('Contraharmonic mean Image Q=1.5');