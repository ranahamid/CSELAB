%binary to negetive image conversion

close all;
clear all;
aa=imread('ranahamid.jpg');
a=im2bw(aa);

[h w]=size(a)

%m=1;
%n=1;

for i = 1:1:h
    for j = 1:1:w
         if( a(i,j)==0)
             b(i,j)=1;
         else
             b(i,j)=0;
        
         end
    end
    n=1;

end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');