%page=235
%Butterworth_LowPass_Filter.m


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





% subplot(2,2,2);
% imshow(abs(F),[24 100000])
% title('Image A DFT Magnitude');
% 
% 
% subplot(2,2,3);
% imshow(angle((F)),[-pi pi])
% title('Image A DFT Phase');


%Define Filter function h
t=3;
for kk=3:3:9
    
    h=zeros(M,N);
    %d0=input('Enter the value of D0=');
    %n=input('Enter the order of n=');
    d0=kk;
    n=kk;
    
    for u=1:M
        for v=1:N
            d=((u-M/2)^2+(v-N/2)^2)^(1/2);
            h(u,v)=1/(1+(d/d0)^(2*n));        
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
