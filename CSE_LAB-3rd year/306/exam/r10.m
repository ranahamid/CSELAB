clear all;
close all;
a=[2,1];
b=[1,.25,-.25];
alen=0:length(a)-1;
blen=0:length(b)-1;
N=500;

w=[0:1:N]*pi/N;
h=( a*exp(-j*alen'*w) )./(b*exp(-j*blen'*w));
subplot(2,1,1);
plot(w/pi,abs(h));
subplot(2,1,2);
plot(w/pi,angle(h)*(pi/180));
