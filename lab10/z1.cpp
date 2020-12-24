#include <iostream>

using namespace std;

int main() {
    int n, a, d;

    cout << "Enter n: ";
    cin >> n;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter d: ";
    cin >> d;

    cout << endl;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = a + i * d;
        cout << arr[i] << endl;
    }

    return 0;
}