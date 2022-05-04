%image histogram by 10 steps

image1 = imread('ranahamid.jpg');
image=rgb2gray(image1);

count = zeros(1,261);
for i = 0 : 255
    number = find( i== image(:)  )
    count(i+1) = length(number);   
end



%2nd part
n=10;
m=round(256/n);

ans=zeros(1,m);
for i=1:m
    sum=0;
    for j=1:n
        sum=sum+count((i-1)*n+j);
    end
    ans(i)=sum;
end;





steps =10:10:260;


figure(1);

subplot(2,2,1);
imshow(img);
title('Input Image');


subplot(2,2,2);
plot(ans);
title('Ploted Normalized Histogram');


subplot(2,2,3:4);

stem(steps,ans);
title('Stem Normalized Histogram');
