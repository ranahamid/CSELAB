%Harmonic mean  Filter
%page=323
clc;
clear all;
close all;

img=imread('Fig5.08(b).jpg'); %picture not in book
%img=rgb2gray(img);



img=double(img);
[x y] = size(img);
m=3;
n=3;
Output=img;

%computation
for i=2:(x-1)
    for j=2:(y-1)
        
       Output(i,j)= (m*n)/( 1/img(i-1,j-1) + 1/img(i-1,j) + 1/img(i-1,j+1)+1/img(i,j-1)   + 1/img(i,j)   + 1/img(i,j+1)+1/img(i+1,j-1) + 1/img(i+1,j) + 1/img(i+1,j+1) );
       
    end
end

%end of computation

subplot(1,2,1);
imshow(uint8(img));
title('Original Image');


subplot(1,2,2);
imshow( uint8(Output));
title('Harmonic mean Image');