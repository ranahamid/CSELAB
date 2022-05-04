%page=235
%DFT and IDFT


clc;
clear all;
close all;

imageAa = imread('3.jpg');
imageA =rgb2gray(imageAa );

[M N]=size(imageA);


%Display images

subplot(2,2,1);
imshow(imageA);
title('Image A ');


imageA=double(imageA);
%-1 * 

for x=1:M
    for y=1:N
        imageA(x,y)=imageA(x,y)*(-1)^(x+y);
    end
end

%Perform 2D FFTs

h=waitbar(0,'Calculating DFT...');
for u=1:M
    for v=1:N
        sum=0.0;
        for x=1:M
            for y=1:N
                sum=sum+double(imageA(x,y))*(exp(-j*2*pi*(u*x/M+v*y/N)));
            end
        end
        F(u,v)=sum;
    end
    waitbar(u/M);
end
close(h);





subplot(2,2,2);
imshow(abs(F),[24 100000])
title('Image A DFT Magnitude');


subplot(2,2,3);
imshow(angle((F)),[-pi pi])
title('Image A DFT Phase');


%Define Filter function h
h=zeros(M,N);
d0=input('Enter the value of D0=');

for u=1:M
    for v=1:N
        d=((u-M/2)^2+(v-N/2)^2)^(1/2);
        h(u,v)=exp(-(d^2/(2*(d0^2))));      
    end
end

%Step 3
for u=1:M
    for v=1:N
        glo(u,v)=F(u,v)*h(u,v);
    end
end
 

%Calculating IDFT...

h=waitbar(0,'Calculating IDFT...');
for u=1:M
    for v=1:N
        suml=0.0;
        for x=1:M
            for y=1:N
                suml=suml+double(glo(x,y))*(exp(j*2*pi*(u*x/M+v*y/N)));
            end
        end
        f(u,v)=suml/(M*N);
    end
    waitbar(u/M);
end
close(h);




%-1 * 
for x=1:M
    for y=1:N
        f(x,y)=f(x,y)*(-1)^(x+y);
    end
end



%image show
subplot(2,2,4);
imshow(uint8(f));
title('Image A-IDFT');

