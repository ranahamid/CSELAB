J = imread('main.bmp');
J = rgb2gray(J);
J= im2double(J);

a=10;
b=3;

[M N]=size(J);

k = -1/a;
Noise = zeros(M,N);
for j = 1:b
     Noise = Noise+ k*log(1 - rand(M,N));
end
        

Deg_Image = J + Noise;


subplot(3,2,1);
imshow(J);
title('main image');

subplot(3,2,2);
hist(J);
title('Histogram of main image');

subplot(3,2,3);
imshow(Noise);
title('Noise image');


subplot(3,2,4);
hist(Noise);
title('Histogram of Noise image');


subplot(3,2,5);
imshow(Deg_Image);
title('Degraded image');


subplot(3,2,6);
hist(Deg_Image);
title('Histogram of Degraded image');

%imnoise