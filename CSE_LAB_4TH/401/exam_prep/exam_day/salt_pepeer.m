%conv 1D
clc;
clear all;
close all;
%input
img=imread('8.jpg');
img=rgb2gray(img);
img=double(img)
[m n]=size(img);

per=1;
total=round(per*m*n/100);

ir=randint(1,total,[1 m]);
jr=randint(1,total,[1 n]);
degimg=img;
for k=1:total
    if(img(ir(k),jr(k))>=127)
        degimg(ir(k),jr(k))=0;
    else
        degimg(ir(k),jr(k))=255;
    end
end

%normalization

minn=min(degimg(:))
maxx=max(degimg(:))

degimg=((degimg-minn)*255)./(maxx-minn);
%end
subplot(1,2,1)
imshow(uint8(img))
subplot(1,2,2)
imshow(uint8(degimg));
