#include "util.h"
#include "logic.h"

int main() {
	int* pointer;
	int size;

	cout << "Input sie of array: ";
	cin >> size;

	pointer = new int[size];

	
	delete[] pointer;

	return 0;
}