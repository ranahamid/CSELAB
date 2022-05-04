%Line detection
%page=145

clear all;
close all;
img=imread('line.tif');
T=input('Threshold: ');

%img=rgb2gray(img);




m=[-1  -1   2;
   -1   2  -1;
    2  -1  -1];



[r c]=size(img);
res=zeros(r,c);



for i=2:(r-1)
    for j=2:(c-1)
        
      temp  = sum(sum(double(img((i-1:i+1),(j-1:j+1))).*m));
      %temp  = double(img(i-1,j-1)*m(1,1))+ double(img(i-1,j+1)*m(1,2))+ double(img(i-1,j+1)*m(1,3)) + double(img(i,j-1)*m(2,1))+double(img(i,j)*m(2,1))+double(img(i,j+1)*m(2,3))+double(img(i+1,j-1)*m(3,1))+double(img(i+1,j)*m(3,2))+double(img(i+1,j+1)*m(3,3));
      if(abs(temp)>=T)
            res(i,j)=255;
        end
    end
     
end


subplot(1,2,1);
imshow(img);
title('Original Image');


subplot(1,2,2);
imshow((res));
title('Minus 45 line detected Image');