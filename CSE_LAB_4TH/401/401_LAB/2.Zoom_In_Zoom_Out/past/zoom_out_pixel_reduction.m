%using pixel reduction
close all;
clear all;

aa=imread('aa.jpg');
a=im2bw(aa);

c=size(a)
for i = 1:2:c(1)
    for j = 1:2:c(2)
        b((i+1)/2,(j+1)/2)=a(i,j);
    end
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');