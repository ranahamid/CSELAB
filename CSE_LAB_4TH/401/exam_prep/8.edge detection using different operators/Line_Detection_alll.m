%Line detection-vertical
clc;
clear all;
close all;
img=imread('line.tif');
img=double(img);%must be double

[h w]=size(img);

mv=[ -1 2 -1;-1 2 -1;-1 2 -1 ];
mh=[-1 -1 -1;2 2 2;-1 -1 -1];
mm=[2 -1 -1;-1 2 -1;-1 -1 2];
mp=[ -1 -1 2;-1 2 -1;2 -1 -1 ];


%T=input('Threshold');
T=10;
a=zeros(h,w);
b=zeros(h,w);
c=zeros(h,w);
d=zeros(h,w);


subplot(2,3,1);
imshow(uint8(img));
title('Original Image');


for i=2:h-1
    for j=2:w-1
        %vertical
        s=sum(sum((img(i-1:i+1,j-1:j+1)).*mv));
        if(abs(s>=T))
            a(i,j)=255;
        end
        %horizontal
        s=sum(sum((img(i-1:i+1,j-1:j+1)).*mh));
        if(abs(s>=T))
            b(i,j)=255;
        end
        %minus
        s=sum(sum((img(i-1:i+1,j-1:j+1)).*mm));
        if(abs(s>=T))
            c(i,j)=255;
        end
        %plus
        s=sum(sum((img(i-1:i+1,j-1:j+1)).*mp));
        if(abs(s>=T))
            d(i,j)=255;
        end
        
    end
end

output=a+b+c+d;
for i=2:h-1
    for j=2:w-1
        if(output(i,j)>255)
            output(i,j)=255;
        end
    end
end

subplot(2,3,2);
imshow(uint8(a));
title('vertical point Image');

subplot(2,3,3);
imshow(uint8(b));
title('Horizontal point Image');

subplot(2,3,4);
imshow(uint8(c));
title('Minus point Image');

subplot(2,3,5);
imshow(uint8(d));
title('Plus point Image');



subplot(2,3,6);
imshow(uint8(output));
title('All point Image');
