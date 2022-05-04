%Histogram_Matching
clc;
clear all;
close all;

%input image
img1=(imread('input.tif'));

[h1 w1]=size(img1);

count1=zeros(1,256);
for i=0:255
    line1=find(img1(:)==i);
    count1(i+1)=length(line1)/(h1*w1);
end


sk1=zeros(1,256);
sk1(1)=count1(1);

for i=2:255    
    sk1(i)=sk1(i-1)+count1(i);
end

s1=zeros(1,256);
for i=1:255
    s1(i)=sk1(i)*255+0.5
end

%reference image

img2=(imread('ref.tif'));

[h2 w2]=size(img2);

count2=zeros(1,256);
for i=0:255
    line2=find(img2(:)==i);
    count2(i+1)=length(line2)/(h2*w2);
end


sk2=zeros(1,256);
sk2(1)=count2(1);

for i=2:255    
    sk2(i)=sk2(i-1)+count2(i);
end

s2=zeros(1,256);
for i=1:255
    s2(i)=sk2(i)*255+0.5
end
%Matching

%Main Part
%__________mukhosto

for i=1:256
    for j=1:256
        if(sk1(i)==sk2(j))
            k=j;
            break;
        elseif(sk1(i)<sk2(j))
            k=j-1;
            break;
        end
    end
    sp(i)=k;
end


%____________



%equalize
b=img1;
for p=0:255
    for i=1:h1
        for j=1:w1
            if(img1(i,j)==p)
                b(i,j)=sp(p+1);
            end
        end
    end
end


    
    
subplot(1,3,1);
imshow(img1);
title('Original image');

subplot(1,3,2);
imshow(img2);
title('Reference image');

subplot(1,3,3);
imshow(b);
title('Matching image');




