f = zeros(30,30);
f(5:24,13:17) = 1;
figure(),
imshow(f,'InitialMagnification','fit')


F = fft2(f);
F2 = log(abs(F));
imshow(F2,[-1 5],'InitialMagnification','fit');
colormap(jet); colorbar

figure(),
F = ifft2(F);
imshow(F);

%Discrete Fourier Transform Computed With Padding
F = fft2(f,256,256);
F2 = log(abs(F));
figure(),
imshow(F2,[-1 5],'InitialMagnification','fit');
colormap(jet); colorbar





figure(),
%The zero-frequency coefficient, however, is still displayed 
%in the upper left corner rather than the center. 
%You can fix this problem by using the function 
%fftshift, which swaps the quadrants of F so that
%the zero-frequency coefficient is in the center.

F = fft2(f,256,256);
F2 = fftshift(F);
imshow(log(abs(F2)),[-1 5]); colormap(jet); colorbar



%Frequency Response of a Gaussian Filter
figure(),
h = fspecial('gaussian');
freqz2(h)


