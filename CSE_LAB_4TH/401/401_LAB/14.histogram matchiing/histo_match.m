%histogram matching


clc
clear all;
close all;

%part 1
%image histogram original image


Img1=imread('input.tif');
[h w]=size(Img1);
count1= zeros(1,256);
s_cdf1=zeros(1,256);



%  pdf =img1

for p = 0 : 255
    number1 = find(  Img1(:)==p )
    count1(p+1) = length(number1)/(h*w);
end

%  cdf =img1

s_cdf1(1)=count1(1);
for i = 2: 256
    s_cdf1(i)=s_cdf1(i-1)+count1(i);
end


% mul by 255
for i = 1: 256
    sk(i)=s_cdf1(i)*255;
end




%part 1
%image histogram reference image

Img2= imread('ref.tif');
[h2 w2]=size(Img2);
count2 = zeros(1,256);
s_cdf2=zeros(1,256);

%  pdf =img2

for p = 0 : 255
    number2 = find(  Img2(:)==p )
    count2(p+1) = length(number2)/(h2*w2);
end

% cdf =img2

s_cdf2(1)=count2(1);

for i = 2: 256
   s_cdf2(i)=s_cdf2(i-1)+count2(i);
end

% mul by 255
for i = 1: 256
    sk2(i)=s_cdf2(i)*255;
end


%compute g(zk)-sk>=0
%sk =[0 .1 .2 .5 .5 0.5 0.9 1.0];
%sk2=[0 .1 .3 .7 .9 1.0 1.0 1.0];


pix=256; %=8
sp=zeros(1,pix);

%compute sp
%main part--------------------

for i=1:256
    for j=1:256
        if sk(i)==sk2(j)
            k=j;
            break;
        else if sk(i)< sk2(j)
                k=j-1;
                break;
            end
        end
    end
    sp(i)=k;
end


%image generation
%b= output image


b=Img1;
for p = 0 : 255
    for i = 1 : h
        for j = 1 : w
            if( Img1(i,j) == p )
                b(i,j) = sp(p+1);
            end
        end
    end
end


%image show

subplot(3,3,1);
imshow(Img1)
title('Original Image');

subplot(3,3,2);
plot(count1);
title('Original pdf');

subplot(3,3,3);
plot(s_cdf1);
title('Original cdf');

subplot(3,3,4);
imshow(Img2);
title('Reference Image');


subplot(3,3,5);
plot(count2);

title('Reference pdf');

subplot(3,3,6);
plot(s_cdf2)
title('Reference cdf');

subplot(3,3,7);
imshow(b);
title('Output Image');

subplot(3,3,8);
plot(sp);
title('Image Transformation Function');

