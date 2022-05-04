%Prewitt edge detection-2
%page=708

clear all;
close all;
img=imread('edge.tif');
T=input('Threshold: ');

%img=rgb2gray(img);




m=[-1  0   1;
   -1  0   1;
   -1  0   1];



[r c]=size(img);
res=zeros(r,c);



for i=2:(r-1)
    for j=2:(c-1)
        
      temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*m));
      if(abs(temp)>=T)
            res(i,j)=255;
        end
    end
     
end


subplot(1,2,1);
imshow(img);
title('Original Image');


subplot(1,2,2);
imshow(uint8(res));
title('Prewitt-2 edge detected Image');