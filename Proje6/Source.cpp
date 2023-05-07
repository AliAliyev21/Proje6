#include <iostream> 
using namespace std;


void PrintArray(int* arr, int size) {
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "  ";
	}cout << endl;
}

int GetLittleDigit(int* arr, int size,int& min) {
	min = arr[0];
	for (size_t i = 0; i < size; i++)
	{
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;

}

void main() {
	int size = 5;
	int* arr = new int [size] {23, 45, 12, 36, 53};
	PrintArray(arr, size); 
	int min;
	GetLittleDigit(arr, size, min);
	cout << "Minimum :" << min << endl;

} 
