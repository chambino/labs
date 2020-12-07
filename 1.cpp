#include <iostream>
using namespace std;

int main() {
	int a;
	int *pa = &a;
	int &aref = a;
	cin >> a;
	a += 5;
	cout << "*pa= " << *pa << endl;
	cout << "&aref= " << aref << endl;

	return 0;

}
