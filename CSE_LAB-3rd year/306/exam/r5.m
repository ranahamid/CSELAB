clear all;
close all;

n=0:10;
x=unitstep(0,0,10)-unitstep(50,0,10);
n=0:length(x)-1;
p=-fliplr(n);
p1=min(p);
p2=max(n);
p3=p1:p2;
p12=n(1)-p3(1);
x1(n+p12+1)=x


xeven=0.5*(x1+fliplr(x1));
xodd=0.5*(x1-fliplr(x1));

subplot(2,1,1);
stem(xeven);

subplot(2,1,2);
stem(xodd);


