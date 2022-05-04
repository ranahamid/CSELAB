%conv 1D
clc;
clear all;
close all;
%input
img=imread('5.jpg');
img=rgb2gray(img);


figure(1)
imshow(img)

f=dft_img(img);

[P Q]=size(img);


figure(2);
t=1;
for kk=3:3:9
    d0=kk;
    h=zeros(P,Q);
    for u=1:P
        for v=1:Q
            d=sqrt( (u-P/2)^2+ (v-Q/2)^2);
            
                h(u,v)=exp(-(d^2/(2*d0^2)))
            
        end
    end
    subplot(3,2,t);
    t=t+1;
    imshow(h);
    title(['kk=',int2str(kk)]);
    %multiply
    s_f=f.*h;
    F=uint8(idft_img(s_f));
    subplot(3,2,t)
    t=t+1
    imshow((F));
    title('image');
end

