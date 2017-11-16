#include <math.h>
class Circle : public Shape {
protected:
	static const double PI;
	int radius;
public:
	Circle(int rad)
		:radius(rad) {
	}
	virtual double area() {
		return PI * (radius * radius);
	}
	virtual void draw() {
		for (int i = 0; i <= radius * 2; i++)
		{
			for (int j = 0; j <= radius * 2; j++)
			{
				double distance = sqrt((j - radius)*(j - radius) + (i - radius)*(i - radius));
				if (distance < radius + 0.5 && distance > radius -0.5)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
};