clc;
close all;
clear all;
a=imread('5.jpg');
b=rgb2gray(a);

[r,c]=size(b)


subplot(2,2,1);
imshow(b);
title('main image');
b=double(b);
for u=1:r
    for v=1:c
       b(u,v)=b(u,v)*(-1)^(u+v);
    end 
end


for u=1:r
    for v=1:c
        sum=0.0;
        for x=1:r
            for y=1:c
                sum=sum+double(b(x,y))*(exp(-j*2*pi*(u*x/r+v*y/c)));
            end
        end
        dft(u,v)=sum;
       
    end
end

for u=1:r
    for v=1:c
       dft1(u,v)=real(dft(u,v));
    end 
end
%m=fft2(b); 

subplot(2,2,2);
imshow(uint8(dft));
title('fourier image');

subplot(2,2,3);
imshow(abs(dft),[24,100000]);
title('fft image');


for u=1:r
    for v=1:c
        sum=0.0;
        for x=1:r
            for y=1:c
                sum=sum+double(dft(x,y))*(exp(j*2*pi*(u*x/r+v*y/c)));
            end
        end
        idft(u,v)=sum/(r*c);
    end 
end

for u=1:r
    for v=1:c
       idft(u,v)=idft(u,v)*(-1)^(u+v);
    end 
end


%kk=ifft2(m);
subplot(2,2,4);
imshow(uint8(idft));
title('idft image');