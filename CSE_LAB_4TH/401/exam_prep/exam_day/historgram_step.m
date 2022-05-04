%conv 1D
clc;
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[m n]=size(img);

count=zeros(1,300);

for p=0:255
        numbers=find(p==img(:))
        count(p+1)=length(numbers);
end

n=10; %class
m=round(256/n);
s=zeros(1,m);


for i=1:m
    sum=0;
    for j=1:n
        sum=sum+count((i-1)*10+j);
    end
    s(i)=sum;
end
stem(s);
        
        
        