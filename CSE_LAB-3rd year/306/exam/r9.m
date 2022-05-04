clear all;
close all;
x=[4 2 1 2 3 4 7 4];
N=length(x);
n=0:N-1;
k=0:N-1;
wn=exp(-j*2*pi/N);
nk=n'*k;
wnnk=wn.^nk;
X=x*wnnk;


subplot(2,1,1);
plot(abs(X));
subplot(2,1,2);
plot(angle(X)*(pi/180));
