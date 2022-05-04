clc;
close all;
clear all;
n=0:1:200;
x=3*cos(0.1*pi*n+(pi/3))+2*sin(.5*pi*n);


subplot(2,1,1);
stem(n,x);
title('Signal');
xlabel('Time');
ylabel('Amplitude');

subplot(2,1,2);
plot(x);
title('plot Signal');
xlabel('Time');
ylabel('Amplitude');