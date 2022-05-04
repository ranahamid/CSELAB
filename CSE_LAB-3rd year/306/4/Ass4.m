% P2.1a
clc;clear all;close all;
n  = [0:25];
x1 = zeros(1,26);
for m=0:10,
    x1 = x1 + (m-1).*(impseq(2.*m,0,25)-impseq(2.*m+1,0,25));
end
subplot(3,2,1);
stem(n,x1);
title('Sequence in Problem 2.1a')