#include<iostream>
using namespace std;




int main() {
    int n = 2;

    cout << "Enter n value: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        int sum = 0;

        for (int j = 1; j < i; j++) {
            if (i % j == 0) sum += j;
        }

        if (i == sum) {
            cout << i << endl;
        }
    }

    cout << endl;

    return 0;
}
