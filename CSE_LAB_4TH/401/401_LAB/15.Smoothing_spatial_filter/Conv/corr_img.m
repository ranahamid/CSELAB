%correlation function of image

function [out_img]=corr_img(mask,input_img)

img=input_img;

%totals=sum(L(:));
total=9;


[r c]=size(img);


out_img=img;
 sum=0;
for i=2:(r-1)
    for j=2:(c-1)
        sum=0;
     
        s=1;
        t=1;
        for m=(i-1):(i+1)
            for n=(j-1):(j+1)
                sum=sum+double( ((img(m,n))*mask(s,t))  );
                t=t+1;
            end
            t=1;
            s=s+1;
        end
    %    sum=sum/total;      
    out_img(i,j)=uint8 (sum);
    end
end
