clear all;
close all;
a=[1 2 3 4];
alow=0;
ahigh=3;
a=[2 1 2 1];       %a sequnce
b=[ 1 2 3 4];
blow=0;
bhigh=3;

c=conv(a,b);
disp(c);


clow=alow+blow;
chigh=ahigh+bhigh;
subplot(2,1,1);
stem(clow:chigh,c);

alen=length(a);
blen=length(b);
clen=length(c);
m=max(alen,blen);
c=[c,zeros(1,2*m-clen)];
for i=1:m
   y(i)=c(i)+c(i+m);
end

subplot(2,1,2);
stem(y);


