%image histogram equlization

image1 = imread('ranahamid.jpg');
Img2=rgb2gray(image1);

[h w]=size(Img2);
count = zeros(1,256);
sk=zeros(1,256);


%  count=probability

for p = 0 : 255
    number = find(  Img2(:)==p )
    count(p+1) = length(number)/(h*w);
end

sk(1)=count(1);

for i = 2: 256
    sk(i)=sk(i-1)+count(i);
end


pix=255;

for i=1:256
    %s(i)= ( (sk(i)-min(sk))/(max(sk)-min(sk)) )*pix+0.5;
    s(i)=sk(i)*pix+0.5;
end


%image generation



b=Img2;
for p = 0 : 255
    for i = 1 : h
        for j = 1 : w
            if( Img2(i,j) == p )
                b(i,j) = s(p+1);
            end
        end
    end
end


subplot(2,2,1:2);
p = 0:255;
plot(p/255,s);


subplot(2,2,3);
imshow(Img2)


subplot(2,2,4);
imshow(b)
