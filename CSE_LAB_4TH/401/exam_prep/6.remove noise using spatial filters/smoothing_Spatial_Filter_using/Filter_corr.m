function [b]=Filter_corr(img,mask)


[h w]=size(img);
b=img;


for i=2:h-1
    for j=2:w-1
        s=1;
        t=1;
        sum=0;
        for m=i-1:i+1
            for n=j-1:j+1
                sum=sum+double(img(m,n))*mask(s,t);
                t=t+1;
            end
            t=1;
            s=s+1;
        end
        b(i,j)=sum;
    end
end
