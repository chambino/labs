#include <iostream>

using namespace std;

int main(void) {
	setlocale(LC_ALL, "rus");
	int const n = 10;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cout << "N: ";
		cin >> arr[i];
	}

	cout << "Результат: ";
	int maxIndex = 0;
	int minIndex = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] < arr[minIndex]) {
			minIndex = i;
			for (int i = 0; i < n; i++) {
				if (arr[i] > arr[maxIndex])
					maxIndex = i;
			}
			int start = min(minIndex, maxIndex);
			int end = max(minIndex, maxIndex);

			for (int i = start + 1; i < end; i++)
				arr[i] = 0;
		}
		cout << arr[i] << " ";
	}
	cout << endl;


}