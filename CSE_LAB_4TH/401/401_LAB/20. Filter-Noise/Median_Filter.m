%Median  Filter
%page=322
clc;
clear all;
close all;

img=imread('Fig5.10(a).jpg');
%img=rgb2gray(img);
subplot(2,2,1);
imshow(uint8(img));
title('Original Image');



img=double(img);
[x y] = size(img);
m=3;
n=3;

%computation 1

Output1=img;
for i=2:(x-1)
    for j=2:(y-1)
        
        Output1(i,j)=median([ img(i-1,j-1),img(i-1,j),img(i-1,j+1),img(i,j-1),img(i,j),img(i,j+1),img(i+1,j-1),img(i+1,j),img(i+1,j+1) ]);
       
    end
end

%end of computation 1
subplot(2,2,2);
imshow( uint8(Output1));
title('1 pass Median Filter Image');


%computation 2

Output2=Output1;
for i=2:(x-1)
    for j=2:(y-1)
        
        Output2(i,j)=median([ Output1(i-1,j-1),Output1(i-1,j),Output1(i-1,j+1),Output1(i,j-1),Output1(i,j),Output1(i,j+1),Output1(i+1,j-1),Output1(i+1,j),Output1(i+1,j+1) ]);
       
    end
end
 
%end of computation 2
 subplot(2,2,3);
imshow( uint8(Output2));
title('2 pass Median Filter Image');


%computation 3

Output3=Output2;
for i=2:(x-1)
    for j=2:(y-1)
        
         Output3(i,j)=median([ Output2(i-1,j-1),Output2(i-1,j),Output2(i-1,j+1),Output2(i,j-1),Output2(i,j),Output2(i,j+1),Output2(i+1,j-1),Output2(i+1,j),Output2(i+1,j+1) ]);
       
    end
end
 
%end of computation 3


subplot(2,2,4);
imshow( uint8(Output3));
title('3 pass Median Filter Image');