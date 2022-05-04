%erosion
clc;
clear all;
close all;
img=imread('circles.png');
%img=rgb2gray(img);
[M N]=size(img);

se=strel('ball',5,5);
nHood=getnhood(se);
[m n]=size(nHood);

p=floor(m/2);
q=floor(n/2);

P=zeros(M+2*p,N+2*q);
P(p+1:M+p,q+1:N+q)=img;

for i=1:M
    for j=1:N
        subimg=P(i:i+2*p,j:j+2*q);
        g(i,j)=max(subimg(:));
    end
end

%dialation
[M N]=size(g);

se=strel('ball',5,5);
nHood=getnhood(se);
[m n]=size(nHood);

p=floor(m/2);
q=floor(n/2);

P=zeros(M+2*p,N+2*q);
P(p+1:M+p,q+1:N+q)=g;

for i=1:M
    for j=1:N
        subimg=P(i:i+2*p,j:j+2*q);
        h(i,j)=min(subimg(:));
    end
end


subplot(2,1,1);
imshow(img);
title('Original image');


subplot(2,1,2);
imshow(h);
title('boundary image');


