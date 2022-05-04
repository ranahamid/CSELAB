function [my_matrix my_min my_max]=normalization(my_matrix)

my_min = min( reshape( my_matrix, numel( my_matrix ), 1 ) );
my_matrix = my_matrix - my_min;
my_max = max( reshape( my_matrix, numel( my_matrix ), 1 ) );
my_matrix = my_matrix ./ my_max;

