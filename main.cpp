#include <iostream>

using namespace std;

int main(void) {
	cout << "**********************\n";
	cout << "*     BIG MATRIX     *\n";
	cout << "**********************\n" << endl;

	const unsigned int N = 100000000;
	float matrix[N][N];

	cout << "Creating a ";
	cout << N;
	cout << " * ";
	cout << N;
	cout << " matrix...\n";

	for (unsigned int j = 0; j < N; j++) {
		for (unsigned int k = 0; k < N; k++) matrix[j][k] = j * k;
	}

	cout << "Memory occupation: ";
	cout << (sizeof(float) * N * N) / (1024 * 1024 * 1024);
	cout << " GB\n";

	cout << "End\n" << endl;
	return EXIT_SUCCESS;
}
