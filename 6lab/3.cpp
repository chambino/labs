#include <iostream>
#include <cmath>
using namespace std;



void calculation(int number, int &cube, int &sqr, double &reverse);

int main()
{
	int count = 4;

	for (int i = 0; i < 4; i++)
	{
		int number = 0, cube = 0, sqr = 0;
		double reverse = 0;
		cout << "Enter number: " << endl;
		cin >> number;

		calculation(number, cube, sqr, reverse);
		cout << "cube = " << cube << endl;
		cout << "sqr = " << sqr << endl;
		cout << "reverse = " << reverse << endl;
	}
}

void calculation(int number, int &cube, int &sqr, double &reverse)
{
	sqr = pow(number, 2);
	cube = pow(number, 3);
	reverse = 1 / number;


}