%convolution of image
function [Output] = img_conv2( mask,Input)

v=flipdim(mask,2);
w = flipdim(v,1);

[x y] = size(Input);
[m n]=size(w);


k1=(m-1)/2;
k2=(n-1)/2;
tempInput=padarray(Input,[k1 k2]);

for i = 1 : x
    for j = 1 : y
         aValue = tempInput(i,j)*w(1,1)+tempInput(i,j+1)*w(1,2)+tempInput(i,j+2)*w(1,3)+tempInput(i+1,j)*w(2,1)+tempInput(i+1,j+1)*w(2,2)+tempInput(i+1,j+2)*w(2,3)+ tempInput(i+2,j)*w(3,1)+tempInput(i+2,j+1)*w(3,2)+tempInput(i+2,j+2)*w(3,3);
         Output(i,j)= aValue;
    end
end