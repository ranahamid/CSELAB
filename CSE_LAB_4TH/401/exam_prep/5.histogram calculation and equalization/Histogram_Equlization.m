%Histogram equlization
clc;
clear all;
close all;
img=rgb2gray(imread('1.jpg'));

[h w]=size(img);

count=zeros(1,256);
for i=0:255
    line=find(img(:)==i);
    count(i+1)=length(line)/(h*w);
end


s=zeros(1,256);
s(1)=count(1);

for i=2:256    
    s(i)=s(i-1)+count(i);
end

sk=zeros(1,256);
for i=1:256
    sk(i)=s(i)*255+0.5
end


b=img;
for p=0:255
    for i=1:h
        for j=1:w
            if(img(i,j)==p)
                b(i,j)=sk(p+1);
            end
        end
    end
end


    
    
subplot(2,2,1);
imshow(img);
title('Original image');

subplot(2,2,2);
imshow(b);
title('Equalized image');

subplot(2,2,3:4);
plot(s);
title('Plot');


