function [b]=Filter_conv(img,mask)
b=conv2(img,mask);