clc;
clear all;
close all;
%Exponential
n=4; %length of exponential length
a=1  %a value
N2=0:n;
y=exp(a*N2);
stem(N2,y);
subplot(1,1,1);
title('Exponential');
xlabel('N');
ylabel('Amplitude');
