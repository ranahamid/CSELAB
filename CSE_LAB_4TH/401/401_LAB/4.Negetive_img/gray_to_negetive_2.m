%gray image to negetive conversion

close all;
clear all;
aa=imread('ranahamid.jpg');
a=rgb2gray(aa);

c=size(a)

%m=1;
%n=1;

for i = 1:1:c(1)
    for j = 1:1:c(2)
             b(i,j)=256-1-a(i,j);
    end
    n=1;
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');