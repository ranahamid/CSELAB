clear all; close all;

 
a=[2,1];
b=[1,.25,-.25];
la=0:length(a)-1;
lb=0:length(b)-1;
N=500;
w=[0:1:500]*pi/N;
H=(a*exp(-j*la'*w))./(b*exp(-j*lb'*w));

subplot(2,1,1);
plot(abs(H));
subplot(2,1,2);
plot(angle(H)*(pi/180)); %in degree
%plot(angle(H)*);%in radians

