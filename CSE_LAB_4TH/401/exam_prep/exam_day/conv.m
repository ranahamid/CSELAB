clc
clear all;
close all;

a=[2 1 2 1];       %a sequnce
b=[ 1 2 3 4];
c=conv(a,b);
disp(c);

figure(1)
stem(c);
figure(2)
plot(c);