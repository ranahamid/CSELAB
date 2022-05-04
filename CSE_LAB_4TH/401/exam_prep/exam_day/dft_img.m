function [f]=dft_img(img)

[m n]=size(img);
img=im2double(img);
for x=1:m
    for y=1:n
        img(x,y)=img(x,y)*( (-1)^(x+y));
    end
end

for u=0:m-1
    for v=0:n-1
        sum=0.0;
        for x=0:m-1
            for y=0:n-1
                sum=sum+double(img(x+1,y+1))*(exp(-j*2*pi*(u*x/m)+(v*y/n))) ;
            end
        end
        f(u+1,v+1)=sum;
    end
end