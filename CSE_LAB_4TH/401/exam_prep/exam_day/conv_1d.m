%conv 1D
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
%subplot(2,1,1);
stem(clow:chigh,c);