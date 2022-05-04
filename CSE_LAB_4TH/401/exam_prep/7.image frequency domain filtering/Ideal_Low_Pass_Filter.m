%%Ideal low pass filter

clc;
clear all;
close all;
img=imread('5.jpg');
img=rgb2gray(img);

subplot(4,2,1:2);
imshow(img);
title('original image');


shift_F=dft_img(img);
[P Q]=size(img);

t=3;
for kk=3:3:9
    d0=kk;%input
    h=zeros(P,Q);
    for u=1:P
        for v=1:Q
            d=sqrt( (u-P/2)^2+(v-Q/2)^2);
            if(d<=d0)
                h(u,v)=1;
            end
        end
    end
    %Filter show
    subplot(4,2,t);
    t=t+1;
    imshow((h));
    title(['h at ',int2str(kk)]);
    
    %multiply
    out_img=shift_F.*h;
    
    %idft
    F=idft_img(out_img);
    
    
    
    %idft img show
    subplot(4,2,t);
    t=t+1;
    imshow(uint8(F));
    title(['idft img at ',int2str(kk)]);
end

    