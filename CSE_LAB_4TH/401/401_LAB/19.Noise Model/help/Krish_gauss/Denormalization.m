function [my_matrix]=Denormalization(my_matrix, my_min, my_max)
my_matrix = my_matrix .* my_max;
my_matrix = my_matrix + my_min;