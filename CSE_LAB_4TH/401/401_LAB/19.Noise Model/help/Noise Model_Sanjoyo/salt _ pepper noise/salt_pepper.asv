clear all;
close all;
img=imread('main.bmp');
img=rgb2gray(img);
img2=img;
[m n]=size(img);
per=input('Enter percent(%) of noise= ');
limit=((per*m*n)/100);
limit=int16(limit);
i=randint(1,limit,[1 m]);
j=randint(1,limit,[1 n]);
  
  for k=1:limit
      value=img2(i(k),j(k));
      if(value>=127)
          img2(i(k),j(k))=0;
      else
          img2(i(k),j(k))=255;
      end
  end
  figure,
  subplot(1,2,1);
  imshow(img);
  title('Original Image');
 
  
  subplot(1,2,2);
  imshow(img2);
  title(['Adding solt & pepper with(%)',num2str(per)]);