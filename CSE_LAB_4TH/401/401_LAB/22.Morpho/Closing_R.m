clc;
clear all;

I=imread('circles.png');         
[M,N]=size(I);

se=strel('square',15);
se = strel('disk',10);
nHood=getnhood(se);
[m,n]=size(nHood);

p=floor(m/2);
q=floor(n/2);

%erosion
P=zeros(M+2*p,N+2*q);         %----
[MM,NN]=size(P);

P(p+1:M+p,q+1:N+q)=I;     %----

for i=1:MM-2*p       %----
    for j=1:NN-2*q
        subImg=P(i:i+2*p,j:j+2*q);         %----
        maxVal=max(subImg(:));
        G(i,j)=maxVal;
    end
end


%dialation
[M,N]=size(G);
PI=zeros(M+2*p,N+2*q);
%[MM,NN]=size(PI);

PI(p+1:M+p,q+1:N+q)=G;

for i=1:MM-2*p
    for j=1:NN-2*q
        subImg2=PI(i:i+2*p,j:j+2*q);
        minVal=min(subImg2(:));
        GG(i,j)=minVal;
    end
end

%G=imclose(I,se);%built in function
subplot(2,1,1);
title('Original Image');
imshow(I);

subplot(2,1,2);
title('Opened Image');
imshow(GG,[]); %0-255



