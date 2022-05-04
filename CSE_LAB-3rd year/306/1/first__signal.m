F=10;
Fs=50;
A=1;
t=0:0.02:1;
f=F/Fs;
x=A*sin(2*pi*f*t);

plot(x);
stem(t,x);
xlabel('Time');
ylabel('Amplitude');