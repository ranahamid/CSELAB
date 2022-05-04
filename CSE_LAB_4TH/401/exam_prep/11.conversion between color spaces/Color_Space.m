clc;
clear all;
close all;


%RGB
figure(1);
I_rgb=imread('1.jpg');
R=I_rgb(:,:,1);
G=I_rgb(:,:,2);
B=I_rgb(:,:,3);



subplot(2,2,1);
imshow(I_rgb);
title('RGB');

subplot(2,2,2);
imshow(R);
title('R');

subplot(2,2,3);
imshow(G);
title('G');

subplot(2,2,4);
imshow(B);
title('B');


%RGB TO CMY
figure(2);

I_cmy=255-I_rgb;
C=255-R;
M=255-G;
Y=255-B;



subplot(2,2,1);
imshow(I_cmy);
title('RGB to CMY');


subplot(2,2,2);
imshow(C);
title('C');

subplot(2,2,3);
imshow(M);
title('M');


subplot(2,2,4);
imshow(Y);
title('Y');


%CMY TO RGB
figure(3);
I_rgb_4_cmy=255-I_cmy;
R=I_rgb_4_cmy(:,:,1);
G=I_rgb_4_cmy(:,:,2);
B=I_rgb_4_cmy(:,:,3);



subplot(2,2,1);
imshow(I_rgb_4_cmy);
title('RGB');


subplot(2,2,2);
imshow(R);
title('R');


subplot(2,2,3);
imshow(G);
title('G');



subplot(2,2,4);
imshow(B);
title('B');

%RGB TO HSV
figure(4);
I_hsv=rgb2hsv(I_rgb);
H=I_hsv(:,:,1);
S=I_hsv(:,:,2);
V=I_hsv(:,:,3);



subplot(2,2,1);
imshow(I_hsv);
title('RGB to HSV');

subplot(2,2,2);
imshow(H);
title('H');

subplot(2,2,3);
imshow(S);
title('S');

subplot(2,2,4);
imshow(V);
title('V');




%HSV to RGB
figure(5);
rgb_image=hsv2rgb(I_hsv);
R=rgb_image(:,:,1);
G=rgb_image(:,:,2);
B=rgb_image(:,:,3);



subplot(2,2,1);
imshow(rgb_image);
title('HSV to RGB');


subplot(2,2,2);
imshow(R);
title('R');


subplot(2,2,3);
imshow(G);
title('G');



subplot(2,2,4);
imshow(B);
title('B');
