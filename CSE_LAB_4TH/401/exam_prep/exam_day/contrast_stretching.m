%conv 1D
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[M N]=size(img);

x1=90;
x2=160;
y1=50;
y2=140;

for i=1:M
    for j=1:N
        n=img(i,j);
        if(n>=0 && n<=x1)
            b(i,j)=(y1/x1)*n;
       
        elseif(n>x1 && n<=x2)
            b(i,j)=((y2-y1)/(x2-x1))*n+y1;
                
        elseif(n>x2 && n<=255)
            b(i,j)=((255-y2)/(255-x2))*n+y2;
        end
        
    end
end
imshow(b);
        
            