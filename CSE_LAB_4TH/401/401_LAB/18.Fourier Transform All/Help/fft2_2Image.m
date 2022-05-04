%2D FFT Demo

%Import images

imageA = imread('5.jpg');
imageB = imread('9.jpg');
imageA =rgb2gray(imageA );
imageB=rgb2gray(imageB );


%Display images

subplot(3,2,1);
imshow(imageA)
title('Image A ')
subplot(3,2,2); 
imshow(imageB)
title('Image B')

%Perform 2D FFTs

fftA = fft2(double(imageA));
fftB = fft2(double(imageB));

%Display magnitude and phase of 2D FFTs

subplot(3,2,3);
%Y = fftshift(X) rearranges the outputs of fft, fft2, and fftn by moving the zero-frequency component to the center of the array. It is useful for visualizing a Fourier transform with the zero-frequency component in the middle of the spectrum.
imshow(abs(fftshift(fftA)),[24 100000])
title('Image A FFT2 Magnitude')

subplot(3,2,4); 
imshow(angle(fftshift(fftA)),[-pi pi])
title('Image A FFT2 Phase')

subplot(3,2,5);
imshow(abs(fftshift(fftB)),[24 100000]) 
title('Image B FFT2 Magnitude')

subplot(3,2,6); 
imshow(angle(fftshift(fftB)),[-pi pi])
title('Image B FFT2 Phase')

% figure
% ifftA=ifft2(fftA);
% imshow(uint8(ifftA));


