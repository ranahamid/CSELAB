clc;
clear all;
close all;
n=1:10;
k=5;
x=[(n-k)==0];
subplot(3,1,1);
%plot(x);
m=-4:5
stem(m,x);
title('Unit impulse');

%Unit Step
n=0:10;
x=[(n-k)>=0];
subplot(3,1,2);
%plot(x);
m=-5:5
stem(m,x);
title('Unit Step');
xlabel('N');
ylabel('Amplitude')


%Unit Ramp
n1=10; %n value
N2=0:n1;
subplot(3,1,3);
%plot(x);
stem(N2,N2);
title('Unit Ramp');
xlabel('N');
ylabel('Amplitude')

