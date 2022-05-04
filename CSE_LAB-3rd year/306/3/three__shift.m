clc;
close all;
clear all;
a=[1 2 3]; % input('Enter the first sequence');
alow=0;   %input('Enter the lower limit of a');
ahigh=2;   %input('Enter the higher limit of a');
subplot(3,1,1);
stem(alow:ahigh,a);
title('Original signal');
xlabel('time');
ylabel('amplitude');


subplot(3,1,2);
k=4;
ahigh=ahigh+k;
alow=alow+k;
stem(alow:ahigh,a);
title('left shift signal');
xlabel('time');
ylabel('amplitude');


a=[1 2 3];
alow=0;   
ahigh=2;   
subplot(3,1,3);
k=1;  %right shift unit
ahigh=ahigh-k;
alow=alow-k;
stem(alow:ahigh,a);
title('right shift signal');
xlabel('time');
ylabel('amplitude');