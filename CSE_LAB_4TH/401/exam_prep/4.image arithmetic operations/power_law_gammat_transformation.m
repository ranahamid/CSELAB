%power_law_gammat_transformation
clc;
clear all;
close all;

img=imread('1.jpg')
img=rgb2gray(img)
img=im2double(img);%double or errror at .^


figure(1);
subplot(3,2,1);
imshow(img);
title('original image');

test=1;
const=2;

for gamma=0.8:-0.2:0
    power_img1=const*img.^gamma;
    test=test+1;
    subplot(3,2,test);
    imshow(uint8(power_img1));
    title(['Power law gamma image at gamma=',int2str(gamma)]);
end
    
figure(2);    
test=1;
const=1;    
for gamma=1:1:6
    power_img=const*img.^gamma;
    
    subplot(3,2,test);
    test=test+1;
    imshow(power_img);
    title(['Power law gamma image at gamma=',int2str(gamma)]);
end


    