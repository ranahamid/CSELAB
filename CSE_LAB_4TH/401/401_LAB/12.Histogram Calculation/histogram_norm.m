%image histogram normalization
 
image1 = imread('ranahamid.jpg');
img=rgb2gray(image1);

[h w]=size(img);
count = zeros(1,256);
for i = 0 : 255
    number = find( i== img(:)  )
    count(i+1) = length(number)/(h*w);   
end



figure(1);

subplot(2,2,1);
imshow(img);
title('Input Image');

p = 0:255;

subplot(2,2,2);
plot(count);
title('Ploted Normalized Histogram');


subplot(2,2,3:4);

stem(p,count);
title('Stem Normalized Histogram');
