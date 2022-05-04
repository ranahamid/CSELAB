%page=235
%DFT and IDFT


clc;
clear all;
close all;

imageAa = imread('6.jpg');
imageA =rgb2gray(imageAa );


%Display images

subplot(2,2,1);
imshow(imageA);
title('Image A ');
[M N]=size(imageA)



shift_F=dft_img(imageA);



subplot(2,2,2);
imshow(abs(shift_F),[24 100000])
title('Image A DFT Magnitude');


subplot(2,2,3);
%imshow(angle((shift_F)),[-pi pi]);
F2 = log(abs(shift_F));
imshow(F2,[-1 5]);
title('Image A DFT Log');


 %Calculating IDFT...

 f=idft_img(shift_F);
 

%image show
subplot(2,2,4);
imshow(uint8(f));
title('Image A-IDFT');

