#include <iostream>

using namespace std;

int main(void) {
	cout << "**********************\n";
	cout << "*     BIG MATRIX     *\n";
	cout << "**********************\n" << endl;

	const unsigned int N = 100000000; // Maximum value for a variable of type unsigned int is 4294967295

	float matrix[N][N];

	cout << "Creating a ";
	cout << N;
	cout << " * ";
	cout << N;
	cout << " matrix of floats..." << endl;

	for (unsigned int j = 0; j < N; j++) {
		for (unsigned int k = 0; k < N; k++) matrix[j][k] = j * k;
	}

	cout << "\nWe know that float is 4 bytes and virtual memory limit in a 64 bit machine is 2^64 = 17179869184 GiB.\n" << endl;

	cout << "Memory occupation of our matrix is ";
	cout << sizeof(matrix) / (1024 * 1024 * 1024);
	cout << " GiB, or equivalently ";
	cout << sizeof(matrix);
	cout << " B." << endl;

	cout << "Memory occupation of " << N << " * " << N << " floats is ";
	cout << sizeof(float) * N * N;
	cout << " B." << endl;

	cout << "\nEnd" << endl;
	return EXIT_SUCCESS;
}
