clc;
clear all;
close all;
a=input('Enter amplitude : ');
theta=input('Enter theta :');
theta=pi*theta/180;
f=2000;
fs=8000;
F=f/fs;
n=0:1:63;%t
signal=a*sin(2*pi*F*n+theta);
stem(n,signal);
xlabel('Time');
ylabel('Amplitude');