%page=235
%image_gaussian_high_pass


clc;
clear all;
close all;

imageAa = imread('5.jpg');
imageA =rgb2gray(imageAa );

[M N]=size(imageA);


%Display images

subplot(4,2,1:2);
imshow(imageA);
title('Image A ');


F=dft_img(imageA);


%Define Filter function h
 t=3;
for kk=0:2:4
    h=ones(M,N);
    %d0=input('Enter the value of D0=');
    d0=kk;
    for u=1:M
        for v=1:N
            d=((u-M/2)^2+(v-N/2)^2)^(1/2);
            h(u,v)=1-(exp(-(d^2/(2*(d0^2)))) );      
        end
    end
    
    %Filter show
    subplot(4,2,t);
    t=t+1;
    imshow((h));
    title(['Filter H, D0= ',int2str(kk)]);
    
    %multiply
    for u=1:M
        for v=1:N
            outPut_img(u,v)=F(u,v)*h(u,v);
        end
    end


     %Calculating IDFT...

   f=idft_img(outPut_img);



    %image show
    subplot(4,2,t);
    t=t+1;
    imshow(uint8(f));
    title(['Image IDFT D0= ',int2str(kk)]);
end

