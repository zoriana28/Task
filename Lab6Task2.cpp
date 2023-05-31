#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;
struct INF {
	int key;
	char info;
};
int partition(INF arr[], int low, int high) {
	int pivot = arr[high].key;
	int i = low-1;
	for (int j = low; j < high; j++) {
		if (arr[j].key <= pivot) {
			i++;
			swap(arr[i], arr[j]);
		}
	}
	swap(arr[i + 1], arr[high]);
	return (i + 1);
}
void quickSort(INF arr[], int low, int high) {
	if (low < high) {
		int p = partition(arr, low, high);
		quickSort(arr, low, p - 1);
		quickSort(arr, p + 1, high);
	}
}
int main() {
	srand(time(NULL));
	INF arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i].key = rand() % 100;
		arr[i].info = 'a' + i;
	}
	cout << "Array before sort: " << endl;
	for (int i = 0; i <10 ; i++) {
		cout << arr[i].key << " " << arr[i].info << endl;
	}
	quickSort(arr, 0, 9);
	cout << "Array after sort: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << arr[i].key << " " << arr[i].info << endl;
	}
	return 0;
}
