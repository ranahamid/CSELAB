clear all;
close all;

n=0:25;
x=zeros(1,26);
for m=0:10
    x=x+(m-1).*(unitimpulsep(2.*m,0,25)-unitimpulsep(2.*m+1,0,25) );
end


subplot(2,1,1);
stem(x);


