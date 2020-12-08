#include <iostream>
#include <cmath>
using namespace std;



void calculation(int R, double &circumference, double &areacircle, double &volumebullet);

int main()
{
	int count = 3;

	for (int i = 0; i < 3; i++)
	{
		int R = 0;
		double volumebullet = 0, circumference = 0, areacircle = 0;
		cout << "Enter radius: " << endl;
		cin >> R;

		calculation(R, circumference, areacircle, volumebullet);
		cout << "length circle = " << circumference << endl;
		cout << "S circle = " << areacircle << endl;
		cout << "the volume of the sphere = " << volumebullet << endl;
	}
}

void calculation(int R, double &circumference, double &areacircle, double &volumebullet)
{
	double pi = 3.14;
	circumference = 2 * pi * R;
	areacircle = pi * pow(R, 2);
	volumebullet = 4 / 3 * pi * pow(R, 3);


}