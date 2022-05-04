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
        count(p+1)=length(numbers)/(m*n);
end

s=zeros(1,256);
sk=zeros(1,256);

s(1)=count(1);
sk(1)=round(s(1)*255);
for i=2:256
    s(i)=s(i-1)+count(i);
    sk(i)=round(s(i)*255);
end

for p=0:255
    for i=1:m
        for j=1:n
            if(img(i,j)==p)
                b(i,j)=sk(p+1);
            end
        end
    end
end

subplot(2,1,1)
imshow(img);
subplot(2,1,2)

imshow(uint8(b));


        
        