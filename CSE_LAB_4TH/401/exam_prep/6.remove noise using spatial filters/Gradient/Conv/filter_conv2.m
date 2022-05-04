function[blur_img]=filter_conv4 (img,mask)
v=flipdim(mask,2);
w = flipdim(v,1);

[m n]=size(w);
[p q]=size(img);

k1=(m-1)/2;
k2=(n-1)/2;
t_img=padarray(img,[k1 k2]);

blur_img=img;

for i=2:p-1
    for j=2:q-1
        s=1;
        t=1;
        sum=0;
        for u=i-1:i+1
            for v=j-1:j+1
                sum=sum+t_img(u,v)*w(s,t);
                t=t+1;
            end
            t=1;
            s=s+1;
            
        end
        blur_img(i,j)=sum;
    end
end

        

