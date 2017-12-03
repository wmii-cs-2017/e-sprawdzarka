#include "E.cpp"

int main() {
	int n_dims; // number of dimensions
	int shape[100]; // array for matrix shape
	int matrix[10000]; // the matrix array
	
	// read the matrix parameters and values
	n_dims = read_matrix(matrix, shape);
	// apply subtract_min function on last dimension
	apply_along_last_axis(matrix, shape, n_dims, SUBMIN);
	// print the matrix
	print_matrix(matrix, shape, n_dims);
	return 0;
}