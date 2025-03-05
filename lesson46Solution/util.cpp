#include "util.h"

void init(int* array, int size, int a, int b) {
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % (b - a + 1) + a;

	}
}

string convert(int* array, int size) {
	string s = "";

	for (int i = 0; i < size; i++)
	{
		s += to_string(array[i]) + " ";
	}

	return s;
}