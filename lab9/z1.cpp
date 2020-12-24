#include <iostream>
using namespace std;
class Circle {
private:
	int itsX, itsY, itsR;
public:
	Circle(int x, int y, int r) :itsX(x), itsY(y), itsR(r) {}

	int getX() const { return itsX; }
	void setX(int x) { itsX = x; }

	int getY() const { return itsY; }
	void setY(int y) { itsY = y; }

	int getR() const { return itsR; }
	void setR(int r) { itsR = r; }

	void operator + (Circle c) {
		itsR += c.itsR;
		c.itsR = itsR;
	}

	bool operator < (Circle c) {
		return (itsR < c.itsR);
	}
	bool operator == (Circle c) {
		return (itsR == c.itsR);
	}
};
int main() {
	Circle c1(0, 0, 50);
	Circle c2(0, 0, 40);

	cout << "c1 r = " << c1.getR() << endl;
	cout << "c2 r = " << c2.getR() << endl;

	c1 + c2;


	cout << " r = " << c1.getR() << endl;



	cout << "c1 < c2 : " << boolalpha << (c1 < c2) << endl;
	cout << "c1 == c2 : " << boolalpha << (c1 == c2) << endl;

	return 0;
}