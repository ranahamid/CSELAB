clc;clear all;close all;
x=input('Enter x[n]:');
nx=0:length(x)-1;
N=length(x);
%Compute DFT
n=0:length(x)-1;
for k=0:N-1
 w=exp(-j*2*pi*k*n/N);
 dot_prod=x.*w;
 XX(k+1)=sum(dot_prod);
end
%Plot the input
subplot(3,1,1);
stem(nx,x);
xlabel('Time');ylabel('Input x[n]');
title('Input sequence x[n]     ');
title('Computation of DFT ');
%Plot the magnitude spectrum
subplot(3,1,2);
stem(abs(XX));
xlabel('Time');
ylabel('Amplitude');
title('Magnitude Spectrum');
%Plot the phase spectrum
subplot(3,1,3);
stem(angle(XX));
xlabel('Time');
ylabel('Angle in radian');
title('Phase Spectrum');