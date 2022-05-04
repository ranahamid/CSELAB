%conv 1D
clc;
clear all;
close all;

img=imread('input.tif');
img2=imread('ref.tif');


imgs=img-img2;
imshow(imgs);