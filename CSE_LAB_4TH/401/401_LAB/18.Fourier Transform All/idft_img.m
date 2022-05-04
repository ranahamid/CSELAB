function [f]=idft_img(shift_F)


[M N]=size(shift_F);


    h=waitbar(0,'Calculating IDFT...');
    for u=0:M-1
        for v=0:N-1
            suml=0.0;
            for x=0:M-1
                for y=0:N-1
                    suml=suml+double(shift_F(x+1,y+1))*(exp(j*2*pi*(u*x/M+v*y/N)));
                end
            end
            f(u+1,v+1)=suml/(M*N);
        end
        waitbar(u/M);
    end
    close(h);




%-1 * 
for x=1:M
    for y=1:N
        f(x,y)=f(x,y)*(-1)^(x+y);
    end
end

