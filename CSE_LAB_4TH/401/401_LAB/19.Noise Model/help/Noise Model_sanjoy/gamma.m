I = imread('main.bmp');
main = rgb2gray(I);
a=10;
b=5;
%k = -1/a;
J =double(main);
[M N]=size(J);
noise= gamrnd(a,b,M,N);
ni=noise+J;
figure,
subplot(1,2,1);
imshow(uint8(main));
title('main image');
subplot(1,2,2);
imshow(uint8(ni));
title('after adding erlang noise');
figure,
hist(noise);
title('Histigram of noise');

%for j=1:b
%J= J + k.*log(1 - rand(M,N));
%end