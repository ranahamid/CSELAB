function [shift_F]=dft_img(img)
[M N]=size(img);
img=double(img);

for x=1:M
    for y=1:N
        img(x,y)=img(x,y)*(-1)^(x+y);
    end
end


for u=0:M-1
    for v=0:N-1
        sum=0.0;
        for x=0:M-1
            for y=0:N-1
                sum=sum+ double(img(x+1,y+1))*(exp(-j*2*pi*(u*x/M+v*y/N))); %page-235
                
            end
        end
        shift_F(u+1,v+1)=sum;
    end
end
