% image toolbox
% MATLAB file
%
% noiseadd.m
% Add various types of noise to a matrix.
%
% function f = noiseadd(eu, sigma, type)
% 
%   Input:
%     eu :   original data
%     sigma: L2-norm of added noise (uniform noise or Gaussian noise) /
%              ratio of salt-and-pepper pixels (0<r<1, 0=clean and 1=all polluted)
%     type: 'uniform' or 'gaussian' or 'salt'.
%
%   Example:
%      >> u = img2var('image/cameraman.bmp');
%      >> v1 = noiseadd(u,50,'uniform');
%      >> v2 = noiseadd(u,50,'gaussian');
%      >> v3 = noiseadd(u,0.1,'salt');
%      >> figure; imshow(uint8(v1));
%      >> figure; imshow(uint8(v2));
%      >> figure; imshow(uint8(v3));
%
% created:       07/27/2005
% last modified: 03/31/2009
% author:        jjxu@ucla
%                syleung@gmail

function [f,noise] = noiseadd(eu, sigma, type)

if (strcmp(type,'salt')==1)    % salt-and-pepper noise
    ns = rand(size(eu(:)));
    [ns,I] = sort(ns);
    i=floor(length(eu(:))*sigma);
    f = eu;
    f(I(1:floor(i/2))) = 0;
    f(I(floor(i/2)+1:i)) = 255;
    return
end

if (strcmp(type,'uniform')==1)  % uniform noise
    ns = rand(size(eu));
elseif (strcmp(type,'gaussian')==1) % gaussian noise
    ns = randn(size(eu));
end

% normalization
ns = ns - mean(ns(:));
sig = sqrt(sum(ns(:).^2)/length(ns(:)));

% add noise to generate noisy image
noise=sigma/sig * ns;
f = eu +noise; 

return;

% end of the file
