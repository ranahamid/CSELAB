function [b]=filter_corr(img,mask)
[m n]=size(img);

b=img;



for i=2:m-1
    for j=2:n-1
        sum=0;
        s=1;%remember
        t=1;

        for p=i-1:i+1
            for q=j-1:j+1
                sum=sum+img(p,q)*mask(s,t);
                t=t+1;
            end
            t=1;
            s=s+1;
        end
        b(i,j)=sum;
        
    end
end