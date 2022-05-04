clear all;
close all;
n=0:10
k=5;
x=[(n-k)==0];
figure(1);
subplot(2,2,1);
stem(x);

x=[(n-k)>=0];
subplot(2,2,2);
stem(x);

%x=[(n-k)>=0];
subplot(2,2,3);
stem(n,n);

a=1;
n=0:4;
x=exp(a*n);
subplot(2,2,4);
stem(n,x);

figure(2);
k=[1 2 3 4 5];
x=k;
subplot(2,1,1);
stem(k,x);
x=-k;
subplot(2,1,2);
stem(x,k);
figure(3);

k=[1 2 3 4 5];
klow=0;
khigh=4;
subplot(2,1,1);
stem(klow:khigh,k);
subplot(2,1,2);

klow=-(klow);
khigh=-(khigh);
stem(khigh:klow,fliplr(k));

figure(4);
k=[1 2 3 4 5];
klow=0;
khigh=4;
subplot(3,1,1);
stem(klow:khigh,k);
subplot(3,1,2);
kleft1=klow+4;
kleft2=khigh+4;
stem(kleft1:kleft2,k);

subplot(3,1,3);
kright1=klow-4;
kright2=khigh-4;
stem(kright1:kright2,k);


