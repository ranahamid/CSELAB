clear all; 
close all;

 
x = [4,3,2,1,2,3,4];
n = 0:length(x)-1;
N=  500;
w = [0:1:500]*pi/N;
X = x*exp(-j*n'*w);

% Magnitude Response Plot
subplot(2,1,1); 
plot(w/pi,abs(X));
xlabel('frequency in pi units');
ylabel('|X|');
title('Magnitude Response');


% Phase response plot
subplot(2,1,2); 
plot(w/pi, angle(X)*(180/pi) );
xlabel('frequency in pi units'); 
ylabel('Degrees');
title('Phase Response'); 