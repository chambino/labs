#include <iostream>
using namespace std;


class MyTime
{
private:
	int itsHour, itsMin;

public:
	MyTime(int H, int M) : itsHour(H), itsMin(M) {};


	void setH(int h) { itsHour = h; };
	int getH()const { return itsHour; };
	void setM(int m) { itsMin = m; };
	int getM()const { return itsMin; };

	MyTime operator ++ () {
		itsMin++;
		itsHour += itsMin / 60;
		itsMin %= 60;
		return *this;
	}
	const MyTime operator ++ (int itsMin) {
		itsMin++;
		itsHour += itsMin / 60;
		itsMin %= 60;
		return *this;
	}
	bool operator ==(MyTime t) {
		return (itsHour == t.itsHour && itsMin == t.itsMin);
	}

	bool operator !=(MyTime t) {
		return (itsHour != t.itsHour || itsMin != t.itsMin);
	}


};


int main() {
	MyTime t1(2, 59);
	MyTime t2(3, 00);
	MyTime t3(5; 30);

	++t1;
	t2++;
	cout << "t1 = " << t1.getH() << ":" << t1.getM() << endl;
	cout << "t2 = " << t2.getH() << ":" << t2.getM() << endl;
	cout << "t1 == t2:" << t1.operator==(t2) << endl;
	cout << "t1 != t2:" << t1.operator!=(t2) << endl;

	cin.get(); cin.get();
	return 0;
}