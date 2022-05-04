function [s,hist1,hist2]=histequalization(input);

[r c]=size(input);

hist=zeros(1,256);
for i=1:r
    for j=1:c
        hist(input(i,j)+1)=hist(input(i,j)+1)+1;
    end
end

pdf=zeros(1,256);

%%%PDF%%%%%%%%
for i=1:256
    pdf(i)=hist(i)/(r*c);
end
hist1=pdf;

%%CDF%%%%%%%%%%%
for i=2:256
    pdf(i)=pdf(i-1)+pdf(i);
end
hist2=pdf;

%%%Equalize value
for i=1:256
    s(i)=uint8(pdf(i)*255+0.5);
end
