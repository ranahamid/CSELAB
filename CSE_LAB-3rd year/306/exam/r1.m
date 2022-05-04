clear all;
close all;
a=1;
f=2;
fs=8;
n=0:.02:1;
x=a*sin(2*pi*(f/fs)*n);
stem(x);

