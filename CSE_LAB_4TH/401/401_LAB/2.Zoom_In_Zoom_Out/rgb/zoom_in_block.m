%zoom in by block
close all;
clear all;
a=imread('ranahamid.jpg');


c=size(a)

m=1;
n=1;

for i = 1:1:c(1)
    for j = 1:1:c(2)
         b(m,n,:)=a(i,j,:);
         b(m,n+1,:)=a(i,j,:);
         b(m+1,n,:)=a(i,j,:);
         b(m+1,n+1,:)=a(i,j,:); 
         n=n+2;         
    end
    n=1;
    m=m+2;
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');