#include "util.h"
#include "logic.h"

int main() {
	int n, m;
	int* matrix;

	cout << "Input size of the matrix(N*M): ";
	cin >> n >> m;

	matrix = new int[n * m];

	int size = n * m;

	for (int i = 0; i < n * m; i++)
	{
		matrix[i] = rand() % 100;
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			cout << matrix[m * i + j] << " ";
		}
		cout << "\n";
	}

	//m*i+j
	//logic

	int imax = 0;
	int jmax = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			if (matrix[m * i + j] > matrix[m * imax + jmax]) {
				imax = i;
				jmax = j;
			}
			
		}
		
	}
	cout << "Max element - matrix[" << imax + 1 << "][" << jmax + 1 << "]\n";



	delete[] matrix;
	return 0;
}