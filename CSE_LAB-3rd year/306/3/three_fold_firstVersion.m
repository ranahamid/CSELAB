%only for 1 to 10
clc;
close all;
clear all;
a=[1 2 3 4 5 2 3 4 3]; % input('Enter the first sequence');
alow=0;   %input('Enter the lower limit of a');
ahigh=8;   %input('Enter the higher limit of a');
subplot(2,1,1);
stem(alow:ahigh,a);
title('Original signal');
xlabel('time');
ylabel('amplitude');


subplot(2,1,2);
a=fliplr(a);

alow=-(alow);
ahigh=-(ahigh);
stem(ahigh:alow,a);
title('Folded signal');
xlabel('time');
ylabel('amplitude');