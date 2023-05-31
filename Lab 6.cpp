#include <iostream> 

#include <ctime> 

using namespace std; 

const int n = 10; 

void Fill(int* array) { 

	srand(time(NULL)); 

	for (int i = 0; i < n; i++) { 

		array[i] = rand() % 100; 

	} 

} 

void bubbleSort(int* array) { 

	for (int i = 0; i < n - 1; i++) { 

		for (int j = 0; j < n - i - 1; j++) { 

			if (array[j] > array[j + 1]) { 

				swap(array[j], array[j + 1]); 

			} 

		} 

	} 

} 

void Print(int* array) { 

	for (int i = 0; i < n; i++) { 

		cout << array[i] << " "; 

	} 

	cout << endl; 

} 

 int main() { 

	int *array= new int[n]; 

	Fill(array); 

	cout << "Array before sort: "; 

	Print(array); 

	bubbleSort(array); 

	cout << "Array after sort: "; 

	Print(array); 

	return 0; 

} 
