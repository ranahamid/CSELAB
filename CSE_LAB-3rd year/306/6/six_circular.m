clc;
clear all;
close all;
a=[2 1 2 1];       %a sequnce
b=[ 1 2 3 4];     %b sequnce
%example=page 190


c=conv(a,b);


l1=length(a);
l2=length(b);
m=max(l1,l2);
c=[c,zeros(1:2*m-length(c))]
for i=1 : m
	y(i)=c(i)+c(i+m);
end
subplot(1,1,1);

stem(y);
title('circular correlation');
xlabel('n samples');
ylabel('Amplitude');