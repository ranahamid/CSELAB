%Simple histogram calculation by 10 steps
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

count=zeros(1,260);

for i=0:255
    numbers=find(i==img(:));
    count(i+1)=length(numbers);
end



n=10; %Number of steps
m=round(256/n);
ans=zeros(1,m);
for i=1:1:m
    sum=0;
    for j=1:1:n
        sum=sum+count( (i-1)*10+j);
    end
    ans(i)=sum;
end










subplot(2,2,1);
imshow(img);
title('Input image');


subplot(2,2,2);
plot(ans);
title('Ploted  Histogram');

subplot(2,2,3:4);
stem(ans);
title('stem Histogram');
