
#include <iostream>
using namespace std;

// Print array elements greater than 25
void print (int arr[], int n)
{

	double element= 0;
	for (int i = 0; i < n; i++)
		element+= arr[i];
	element =25+n;

	// Print elements greater than 25
	for (int i = 0; i < n; i++)
		if (arr[i] > element)
			cout << arr[i] << " ";
}


