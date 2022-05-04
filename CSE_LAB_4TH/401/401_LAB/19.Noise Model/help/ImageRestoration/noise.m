clc;
clear all;
close all;
A=imread('original.tif');
%R=imnoise2('uniform',double(A));
r  = imnoise2 ('gaussian', 100000, 1, 0, 1); 
hist(r, bins)
%stem(R,1:256);