clc;
close all;
clear all;

I=imread('Fig9.16(a).jpg'); 
I=im2bw(I);
%I= imread('text.png');
%se = strel('line',11,90);
[M,N]=size(I);

I_com=1-I;% black white image
x0=zeros(M,N);
for i=1:M
    for j=1:N
        if(I(i,j)==0)
        x0(i,j)=1;
        end
    end
end


se=strel('ball',5,5);         
nHood=getnhood(se);
[m,n]=size(nHood);

p=floor(m/2);
q=floor(n/2);


P=zeros(M+2*p,N+2*q);         %----
[MM,NN]=size(P);

for kk=1:10
P(p+1:M+p,q+1:N+q)=x0;         %----
for i=1:MM-2*p         %----
    for j=1:NN-2*q
        subImg=P(i:i+2*p,j:j+2*q);         %----
        maxVal=max(subImg(:));
        G(i,j)=maxVal;
    end
end
G1=G & I_com;
xo=G1;

end
%G=imdilate(I,se); %built in function
subplot(1,2,1);
title('Original Image');
imshow(I);

subplot(1,2,2);
title('Dialeted Image');
imshow(G); %0-255



