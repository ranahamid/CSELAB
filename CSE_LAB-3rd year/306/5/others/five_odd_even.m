clc;
close all;
clear all;
A = 4;%  input('Enter the Signal Amplitude : ');
theta =60;  %input('Enter the Signal Phase in degrees : ');
theta = pi*theta/180;
n=-2:4


x=A*sin(2*pi*(1/8)*n+ theta);
%x=[0 0 0 0 1 2 1];



figure(1)
subplot(3,1,1)
stem(n,x)
title('Real signal');
xlabel('time');
ylabel('amplitude');
%even part
subplot(3,1,2)
even=0.5*(x+fliplr(x));
stem(n,even);
title('Even signal');
xlabel('time');
ylabel('amplitude');

%odd part
subplot(3,1,3)
odd=0.5*(x-fliplr(x));
stem(n,odd);
title('Odd signal');
xlabel('time');
ylabel('amplitude');