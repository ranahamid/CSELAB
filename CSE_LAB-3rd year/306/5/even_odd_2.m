clc;
clear all;
n=0:10

x=unitseq(0,0,10)-unitseq(50,0,10);
%x=[1 1 1  1 ]
n=0:length(x)-1;
p=-fliplr(n);


p1=min(p);        
p2=max(n);

p3=p1:p2;

p12=n(1)-p3(1);

x1(n+p12+1)=x      %no semicolon

xeven=0.5*(x1+fliplr(x1));
subplot(2,1,1);
stem(xeven);

xodd=0.5*(x1-fliplr(x1));
subplot(2,1,2);
stem(xodd);
