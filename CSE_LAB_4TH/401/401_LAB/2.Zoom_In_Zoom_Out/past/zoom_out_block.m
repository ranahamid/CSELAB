%zoom out by block

clear all;
close all;

aa=imread('ranahamid.jpg');
a=im2bw(aa);
c=size(a);

k=1;%height of new image
l=1;%width of new image


[height,width,color]=size(a);


sum=0;

for m =1:2:c(1)	%increase by 2
    for n =1:2:c(2)%increase by 2
         sum=sum+a(m,n);
         sum=sum+a(m,n+1);
         sum=sum+a(m+1,n);
         sum=sum+a(m+1,n+1);
        
         if(sum>2) 
				b(k,l)=1;
         end 		
         sum=0;
         
         n=n+2; 
         
         l=l+1;
         
         if(n>=width)
             break;
         end
    end
	
    k=k+1;
    l=1; 
    
    n=1;
    m=m+2;
    
    if(m>=height)
        break;
    end
end

figure()
imshow(a)
figure()
imshow(b)
imwrite(b,'b.jpg');