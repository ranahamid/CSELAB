clear all;
close all;
x=[4 3 2 1 2 3 4]
N=500;
n=0:length(x)-1;
w=[0:1:N]*pi/N;
X=x*exp(-j*n'*w);


subplot(2,1,1);
plot(w/pi,abs(X));
subplot(2,1,2);
plot(w/pi,angle(X)*(pi/180));
