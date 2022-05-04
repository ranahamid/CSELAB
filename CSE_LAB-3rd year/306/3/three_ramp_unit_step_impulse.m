clc;
%Unit sample/ impulse sequence
n1=10;
n2=0:n1;
k=5;
x=[(n2-k)==0];
subplot(4,1,1);
stem(n2,x);
title('Unit impulse');


% Unit Step
n1=10; % N value
n2=0:n1;
k=5;
x=[(n2-k)>=0];
subplot(4,1,2);
%plot(x);
stem(n2,x);
title('Unit Step');

%ramp
n1=10; % N value
n2=1:n1;
subplot(4,1,3);
stem(n2,n2);
title('Unit Ramp');

%exp
n1=4;%length of exponential sequence
n2=0:n1;
A=1;%value
y=exp(A*n2);
subplot(4,1,4);
stem(n2,y);
title('Exponential');

