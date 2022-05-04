%gray to binary image


close all;
clear all;
aa=imread('ranahamid.jpg');
a=rgb2gray(aa);

c=size(a)

for i = 1:1:c(1)
    for j = 1:1:c(2)
         if( a(i,j)>=0 && a(i,j)<=127)
             b(i,j)=0;
         else
             b(i,j)=1;
         end
    end
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');