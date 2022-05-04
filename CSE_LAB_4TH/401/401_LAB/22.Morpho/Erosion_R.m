clc;
clear all;


%I=imread('Fig0905(a)(wirebond-mask).tif');
I= imread('circles.png');  
[M,N]=size(I);

se=strel('disk',11);         

nHood=getnhood(se);
[m,n]=size(nHood);

p=floor(m/2);
q=floor(n/2);

P=zeros(M+2*p,N+2*q);         %----
[MM,NN]=size(P);

P(p+1:M+p,q+1:N+q)=I;         %----



for i=1:MM-2*p         %----
    for j=1:NN-2*q
        subImg=P(i:i+2*p,j:j+2*q);         %----
        minVal=min(subImg(:));
        G(i,j)=minVal;
    end
end

%G=imerode(I,se); %built in function
subplot(1,2,1);
title('Original Image');
imshow(I);

subplot(1,2,2);
title('Erode Image');
imshow(G);
