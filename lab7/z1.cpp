#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	for (double x = 0; x <= 1; x += 0.1)
		cout << "x:" << x << "  sin(x) = " << sin(x) << endl;

	return 0;
}