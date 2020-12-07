#include <iostream>
using namespace std;




int ReturnObject()
{
	int *object = new int(5);
		return *object;

}

int *ReturnObjectLink()
{
	int *object = new int(10);
	return &*object;
}

int *ReturnObjectAdress()
{
	int* object = new int(15);
	return object;
}

int main()
{
	cout << ReturnObject() << endl;
	cout << ReturnObjectLink() << endl;
	cout << ReturnObjectAdress() << endl;

	return 0;

}