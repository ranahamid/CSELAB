clc;
close all;
clear all;
a=[1:10];
x=[a];
subplot(2,1,1);
stem(a,x);
title('Original signal');
xlabel('time');
ylabel('amplitude');


x=-[a];
subplot(2,1,2);
stem(x,a);
title('Original signal');
xlabel('time');
ylabel('amplitude');
