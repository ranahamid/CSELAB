%zoom out by block by max
clear all;
close all;

aa=imread('ranahamid.jpg');
a=rgb2gray(aa);

c=size(a);

k=1;%height of new image
l=1;%width of new image


[height,width,color]=size(a);


sum=0;

for m =1:2:c(1)	%increase by 2
    for n =1:2:c(2)%increase by 2
         sum1=a(m,n);
         sum2=a(m,n+1);
         sum3=a(m+1,n);
         sum4=a(m+1,n+1);
         
         sum=[sum1,sum2,sum3,sum4];
				b(k,l)=max(sum);
          
         sum1=0;
         sum2=0;
         sum3=0;
         sum4=0;
         
        % n=n+2; 
         
         l=l+1;
         
         if(n>=width-2)
             break;
         end
    end
	
    k=k+1;
    l=1; 
    
    n=1;
  %  m=m+2;
    
    if(m>=height-2)
        break;
    end
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');