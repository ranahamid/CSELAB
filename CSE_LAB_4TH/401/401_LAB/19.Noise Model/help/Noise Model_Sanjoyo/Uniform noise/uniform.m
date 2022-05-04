nput_img  = imread('6.jpg');



Input_img = im2double(Input_img);

[M N]=size(Input_img);
for i=1:M
    for j=1:N
        z_bar=mean(Input_img(:));
       
        sigma=std(Input_img(:));
      
        
        
        temp = exp( -((Input_img(i,j)-z_bar)^2 )/(2*sigma^2)  );
        Noise(i,j) =  temp/(sqrt(2*pi)*sigma);
       
    end
end

%Noise=(b-a)*rand(M,N);
Deg_Image = I+Noise;

subplot(3,2,1);
imshow(Input_img);
title('main image');

subplot(3,2,2);
hist(Input_img);
title('Histogram of main image');

subplot(3,2,3);
imshow(Noise);
title('Noise image');


subplot(3,2,4);
hist(Noise);
title('Histogram of Noise image');


subplot(3,2,5);
imshow(Deg_Image);
title('Degraded image');


subplot(3,2,6);
hist(Deg_Image);
title('Histogram of Degraded image');


%imnoise

 

