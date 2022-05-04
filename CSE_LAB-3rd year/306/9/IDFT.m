clc;
clear all;
close all;
x=[4 2 1 2 3 4 7 4];
N=8;
n=0:N-1;
k=0:N-1;
Wn=exp((j*2*pi)/N);%1 time
nk=n'*k;
Wnk=Wn.^(nk);%2nd time
W=x*Wnk;
Wa=abs(W);
Wa=Wa/N;
plot(Wa);