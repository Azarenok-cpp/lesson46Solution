#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, m;
	int** matrix;

	cout << "Input size of the matrix(N*M): ";
	cin >> n >> m;

	matrix = new int* [n];

	for (int i = 0; i < n; i++)
	{
		//or   *(matrix+i)
		matrix[i] = new int[m];
	}



	int size = n * m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			matrix[i][j] = rand() % 100;
			cout << matrix[i][j] << " ";
		}
		cout << "\n";
	}

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++) {
	//		cout << matrix[m * i + j] << " ";
	//	}
	//	cout << "\n";
	//}

	////m*i+j
	////logic

	//int imax = 0;
	//int jmax = 0;

	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = 0; j < m; j++) {
	//		if (matrix[m * i + j] > matrix[m * imax + jmax]) {
	//			imax = i;
	//			jmax = j;
	//		}

	//	}

	//}
	//cout << "Max element - matrix[" << imax + 1 << "][" << jmax + 1 << "]\n";



	for (int i = 0; i < n; i++) // !!!
	{
		delete[] matrix[i];
	}
	delete[] matrix;
	return 0;
}