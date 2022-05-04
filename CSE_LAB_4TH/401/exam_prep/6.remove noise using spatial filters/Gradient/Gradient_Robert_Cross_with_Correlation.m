%Gradinet image-167 by conv

clc;
clear all;
close all;
img=imread('edge.tif');

mx=[-1 0; 0 1];
my=[0 -1; 1 0];

mx=padarray(mx,[1 1]);
my=padarray(my,[1 1]);

%h=conv2(double(img),double(mx));
%v=conv2(double(img),double(my));

%g=sqrt(double(h).^2+double(v).^2);

[m n]=size(img);
img=double(img);% must be double
for i=1:m-2
    for j=1:n-2
        h(i,j)=mx(2,2)*img(i+1,j+1)+mx(3,3)*img(i+2,j+2);
        v(i,j)=my(2,3)*img(i+1,j+2)+my(3,2)*img(i+2,j+1);
        g(i,j)=sqrt(double(h(i,j)).^2+double(v(i,j).^2));
    end
end


subplot(2,2,1);
imshow(uint8(img));
title('Original image');
subplot(2,2,2);
imshow(uint8(h));
title('horizontal delp/delx');
subplot(2,2,3);
imshow(uint8(v));
title('vertical delp/dely');
subplot(2,2,4);
imshow(uint8(g));
title('gradient image');





% b =
% 
%      0     0     0     0
%      0    -1     0     0
%      0     0     1     0
%      0     0     0     0
% 
% a
% 
% a =
% 
%     -1     0
%      0     1







% my =
% 
%      0    -1
%      1     0
%      
%      
%      
% my =
% 
%      0     0     0     0
%      0     0    -1     0
%      0     1     0     0
%      0     0     0     0