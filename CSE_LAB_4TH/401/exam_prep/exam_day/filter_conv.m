function [b]=filter_conv(img,mask)
img=im2double(img);
[m n]=size(img);
v=flipdim(mask,2);
w=flipdim(v,1);
[s t]=size(w);
k1=floor(s/2);
k2=floor(t/2);

t_img=padarray(img,[k1 k2])

b=img;
for i=2:m-1
    for j=2:n-1
      b(i,j)= sum(sum((t_img(i-1:i+1,j-1:j+1)).*mask));
    end
end