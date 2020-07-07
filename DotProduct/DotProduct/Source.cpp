#include <iostream>

using namespace std;

double DotProduct(const double Vector1[], const double Vector2[], int legth);

int main() {

	cout << "Arrays Practice\n" << endl;

	/*
	Write a function that takes 2 Vectors And returns the dot product of the two vectors.
	The two Vectors must be the same size
	*/

	double Vector1[3] = { 1,4,7 };
	double Vector2[3] = { 2,5,8 };

	cout << "The dot Product of Vector1 and Vector2 is: " << DotProduct(Vector1, Vector2, 3);

	return 0;
}

double DotProduct(const double vector1[], const double vector2[], int length)
{
	double Product = 0;

	for (int i = 0; i < length; i++) {
		Product += vector1[i] * vector2[i];
	}
	return Product;
}