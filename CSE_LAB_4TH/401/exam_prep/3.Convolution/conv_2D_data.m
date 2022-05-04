%convolution of 2d data
clc;
clear all;
close all;

a=rand(3);
disp('a');disp(a);
b=rand(4);
disp('b');disp(b);

c=conv2(a,b);
disp('c');disp(c)

subplot(2,1,1);
stem(c);

subplot(2,1,2);
plot(c);



