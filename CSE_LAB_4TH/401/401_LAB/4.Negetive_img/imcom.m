%black white negetive by imcomplement
close all;
clear all;
aa=imread('ranahamid.jpg');
a=im2bw(aa);

b=imcomplement(a);

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');