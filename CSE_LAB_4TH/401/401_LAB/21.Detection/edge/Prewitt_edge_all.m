%Edge detection
%page=708

clear all;
close all;
img=imread('edge1.tif');
%img=rgb2gray(img);
[r c]=size(img);
res=zeros(r,c);
disp(c)

T=input('Threshold: ');



%Prewitt-1
mh=[-1 -1  -1;
    0  0   0;
   1   1   1];

%Prewitt-2
mv=[-1  0   1;
   -1  0   1;
   -1  0   1];








for i=2:(r-1)
    for j=2:(c-1)
      %p-1 
      temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mh));
      if(abs(temp)>=T)
            res(i,j)=res(i,j)+255;
      end
      %p-2
       temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mv));
      if(abs(temp)>=T)
            res(i,j)=res(i,j)+255;
      end
      
    end
     
end

for i=1:r
    for j=1:c
        if(res(i,j)>255)
            res(i,j)=floor(res(i,j)/4);
        end
    end
end



subplot(1,2,1);
imshow(img);
title('Original Image');


subplot(1,2,2);
imshow(uint8(res));
title('Prewitt Edge detected Image');