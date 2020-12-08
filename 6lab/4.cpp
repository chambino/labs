#include <iostream>
using namespace std;


int main()
{
	int* obj = new int(10);
	int* obj2 = new int(20);
	int* obj3 = new int(30);

	cout << obj << endl;
	cout << obj2 << endl;
	cout << obj3 << endl;
	cout << endl;

	int& objj = *obj, & objj2 = *obj2, & objj3 = *obj3;

	objj *= 2;
	objj2 *= 2;
	objj3 *= 2;

	cout << objj << endl;
	cout << objj2 << endl;
	cout << objj3 << endl;

	free(&objj);
	free(&objj2);
	free(&objj3);

	return 0;

}













































