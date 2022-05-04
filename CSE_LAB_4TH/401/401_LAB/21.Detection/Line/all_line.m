%Line detection
%page=145

clear all;
close all;
img=imread('line.jpg');
img=rgb2gray(img);
[r c]=size(img);
res=zeros(r,c);
disp(c)

T=input('Threshold: ');



%Horizontal
mh=[-1 -1  -1;
    2  2   2;
   -1 -1  -1];

%vertical
mv=[-1  2  -1;
   -1  2  -1;
   -1  2  -1];

%Plus 45
mp=[ 2 -1  -1;
   -1  2  -1;
   -1 -1   2];

%minus
mm=[-1  -1   2;
   -1   2  -1;
    2  -1  -1];






for i=2:(r-1)
    for j=2:(c-1)
      %Horizontal  
      temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mh));
      if(abs(temp)>=T)
            res(i,j)=res(i,j)+255;
      end
      %vertical
       temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mv));
      if(abs(temp)>=T)
            res(i,j)=res(i,j)+255;
      end
      %plus
       temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mp));
      if(abs(temp)>=T)
            res(i,j)=res(i,j)+255;
      end
      %minus
       temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*mm));
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
title('All line detected Image');