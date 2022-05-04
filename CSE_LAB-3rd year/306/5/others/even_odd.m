% Chapter 02: Example 02.04: Even-Odd Synthesis

%

% x(n) = u(n)-u(n-10);

n = [0:10];

x = stepseq(0,0,10)-stepseq(50,0,10);


figure(1)
subplot(3,1,1)
stem(n,x)
title('Real signal');
xlabel('time');
ylabel('amplitude');
%even part
subplot(3,1,2)
even=0.5*(x+fliplr(x));
stem(n,even);
title('Even signal');
xlabel('time');
ylabel('amplitude');

%odd part
subplot(3,1,3)
odd=0.5*(x-fliplr(x));
stem(n,odd);
title('Odd signal');
xlabel('time');
ylabel('amplitude');