function[blur_img]=filter_corr4 (img,mask)

[p q]=size(img);
blur_img=img;

for i=2:p-1
    for j=2:q-1
        s=1;
        t=1;
        sum=0;
        for u=i-1:i+1
            for v=j-1:j+1
                sum=sum+img(u,v)*mask(s,t);
                t=t+1;
            end
            t=1;
            s=s+1;
            
        end
        blur_img(i,j)=sum;
    end
end

        

