#include "Picture.h"

double const Circle::PI = 3.14159;
int main() {
	{
		Picture p;
		p.enter(new Triangle(5, 5));
		p.enter(new Triangle(4, 3));

		p.enter(new Circle(5));
		p.enter(new Circle(10));

		p.enter(new Square(5));
		p.enter(new Square(10));

		p.enter(new Rectangle(4, 8));
		p.enter(new Rectangle(8, 4));

		p.drawAll();
		cout << "Total Area: " << p.totalArea() << endl;
	}
	return 0;
}