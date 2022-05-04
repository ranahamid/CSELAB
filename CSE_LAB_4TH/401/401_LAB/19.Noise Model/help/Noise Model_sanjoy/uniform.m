I = imread('main.bmp');
J = rgb2gray(I);

a=90;
b=160;
J = double(J);
[M N]=size(J);
R = a+(b-a)*rand(M,N);
NM=R+J;
min1=min(min(NM));
max1=max(max(NM));
y=((NM-min1).*255)./(max1-min1);
figure,
subplot(1,2,1);
imshow(uint8(J));
title('main image');
subplot(1,2,2);
imshow(uint8(y)); 
title('Degraded Image');
figure,
hist(NM)
title('Histigram of noise');
%imnoise
%R = J+(b-a)*rand(M,N);

