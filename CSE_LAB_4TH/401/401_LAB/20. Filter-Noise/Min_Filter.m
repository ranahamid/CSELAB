%Min Filter
%page=322
clc;
clear all;
close all;

img=imread('Fig5.08(b).jpg');
%img=rgb2gray(img);



img=double(img);
[x y] = size(img);
m=3;
n=3;
Output=img;

%computation
for i=2:(x-1)
    for j=2:(y-1)
        
        val=min([ img(i-1,j-1),img(i-1,j),img(i-1,j+1),img(i,j-1),img(i,j),img(i,j+1),img(i+1,j-1),img(i+1,j),img(i+1,j+1) ]);
        Output(i,j)=val ;
    end
end

%end of computation

subplot(1,2,1);
imshow(uint8(img));
title('Original Image');


subplot(1,2,2);
imshow( uint8(Output));
title('Min Filter Image');