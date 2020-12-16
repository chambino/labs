#include<iostream>
#include<cmath>
using namespace std;


int Pow(int n, int res);

int main()
{
    int n = 0, P = 1, res = 1, pow = 0;
    cout << "Input number" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pow = Pow(i, res);
        P *= i / i + pow;
    }
    cout << "P= " << P << endl;
    cin.get(); cin.get();
    return 0;
}

int Pow(int n, int res)
{

    for (int i = 1; i <= n; i++)
    {

        res *= n;
    }
    return res;

}