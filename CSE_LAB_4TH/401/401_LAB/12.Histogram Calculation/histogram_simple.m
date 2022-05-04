%image histogram simple

image1 = imread('ranahamid.jpg');
image=rgb2gray(image1);

count = zeros(1,256);
for i = 0 : 255
    number = find( i== image(:)  )
    count(i+1) = length(number);   
end


figure(1);

subplot(2,2,1);
imshow(img);
title('Input Image');

p = 0:255;

subplot(2,2,2);
plot(count);
title('Ploted  Histogram');


subplot(2,2,3:4);

stem(p,count);
title('Stem  Histogram');
