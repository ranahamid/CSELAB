clear all;
close all;
x=[4 2 1 2 3 4 7 4];
N=length(x);
n=0:N-1;
k=0:N-1;
wn=exp(j*2*pi/N);
nk=n'*k;
wnnk=wn.^nk;
X=x*wnnk;
XX=X/N;


subplot(2,1,1);
plot(abs(XX));
subplot(2,1,2);
plot(angle(XX)*(pi/180));
