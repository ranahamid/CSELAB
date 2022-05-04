%conv 1D
clear all;
close all;
a=rand(3)

b=rand(4);
c=conv2(a,b);
disp(c);



%subplot(2,1,1);
stem(c);