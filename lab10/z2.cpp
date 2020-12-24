#include <iostream>

using namespace std;

int main()
{
	const int size = 5;
	int arr[size];
	for (int i = 0; i < size; i++)
	{
		cout << "N: ";
		cin >> arr[i];
	}
	for (int i = size - 1; i + 1; i--) {
		cout << arr[i] << ' ';
	}
	int k = 0;
	for (int i = 0; i < size; ++i)
	{
		if (arr[i] % 2 != 0) {
			cout << "\nA[" << i << "] =" << arr[i] << endl;

		}

	}
	++k; cout << "k= " << k;
	return 0;
}