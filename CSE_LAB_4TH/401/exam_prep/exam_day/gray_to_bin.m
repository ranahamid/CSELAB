%conv 1D
clear all;
close all;

img=imread('1.jpg');
img=rgb2gray(img);

[M N]=size(img);


for i=1:M
    for j=1:N
        
        if(img(i,j)>=127)
            b(i,j)=1;
        else
            b(i,j)=0;
        end
    end
end
imshow(b);
        
            