clc;
clear all;
close all;
a=[3 1 2 -1];%a sequnce
alow=0;%lower of a
ahigh=3; %higher of a
b=[3 2 1];%b sequnce
blow=0; %lower of b
bhigh=2;%higher of b
c=conv(a,b);
disp(c);

subplot(3,1,1);
stem(alow:ahigh,a);
title('1st sequence');
xlabel('n samples'); 
ylabel('Amplitude');


subplot(3,1,2);
stem(blow:bhigh,b);
title('2nd sequence');
xlabel('n samples');
ylabel('Amplitude');


clow=alow+blow;
chigh=ahigh+bhigh;
subplot(3,1,3);
stem(clow:chigh,c);
title('Convulatin');
xlabel('n samples');
ylabel('Amplitude');