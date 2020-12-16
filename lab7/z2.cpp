#include<iostream>
#include<cmath>
using namespace std;


float factor(int number);
float pow(int a, int n);

float factor(int number)
{
	if (!number)
		return 1;
	return number * factor(number - 1);
}


float pow(int power, int number)
{
	if (!number)
		return 1;
	if (number % 2 == 0)
		return pow(power, number / 2) * pow(power, number / 2);

	if (number % 2 == 1)
		return power * pow(power, number - 1);


}
int main()
{
	int number = 0, a = -2;
	float res = 0;
	cout << "Input number=";
	cin >> number;

	for (int i = 0; i <= number; i++)
		res += pow(a, i) / factor(i);
	cout << "Result= " << res << endl;
	cin.get(); cin.get();
	return 0;

}


