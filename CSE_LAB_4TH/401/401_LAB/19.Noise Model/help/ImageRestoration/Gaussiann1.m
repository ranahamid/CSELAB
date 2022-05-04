I = imread('original.tif');
I = double(I);

%// Adjust intensities in image I to range from 0 to 1
I = I - min(I(:));
I = I / max(I(:));

%// Add noise to image
v = var(I(:)) / sqrt(10);
I_noisy = imnoise(I, 'gaussian', 0, v);

%// Show images
figure
subplot(1, 2, 1), imshow(I), title('Original image')
subplot(1, 2, 2), imshow(I_noisy), title('Noisy image, SNR=5db')