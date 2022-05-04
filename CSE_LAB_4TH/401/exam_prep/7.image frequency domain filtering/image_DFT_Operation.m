%DFT image

clc;
clear all;
close all;
img=imread('6.jpg');
img=rgb2gray(img);

shift_F=dft_img(img);

subplot(2,2,1);
imshow(img);
title('original image');


subplot(2,2,2);
imshow(abs(shift_F),[24 10000]);
title('DFT magnitude');


subplot(2,2,3);
imshow(abs(log(shift_F)),[-1 5]);
title('DFT Log');

f=idft_img(shift_F);
subplot(2,2,4);
imshow(uint8(f));
title('IDFT image');