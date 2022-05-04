%conv 1D
clc;
clear all;
close all;

img=imread('input.tif');

imgs=img-128;
imshow(imgs);