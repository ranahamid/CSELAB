function [F]=dft_img(imageA)


[M N]=size(imageA);


imageA=double(imageA);

%-1 * 
for x=1:M
    for y=1:N
        imageA(x,y)=imageA(x,y)*(-1)^(x+y);
    end
end

%Perform 2D FFTs

h=waitbar(0,'Calculating DFT...');
for u=0:M-1
    for v=0:N-1
        sum=0.0;
        for x=0:M-1
            for y=0:N-1
                sum=sum+double(imageA(x+1,y+1))*(exp(-j*2*pi*(u*x/M+v*y/N)));
            end
        end
        F(u+1,v+1)=sum;
    end
    waitbar(u/M);
end
close(h);