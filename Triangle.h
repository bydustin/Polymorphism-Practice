class Triangle : public Shape{
protected:
	float height,base;
public:
	Triangle(int tall, int length)
		:height(tall), base(length) {
	}
	virtual double area() {
		return 0.5 * base * height;
	}
	virtual void draw() {
		for (int i = 1; i < height; i++) {
			for (int j = 0; j < i; j++) {
				if (i == 1 || i == height)
					cout << "* ";
				else if (j == 0 || j == i - 1)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
		for (int k = 1; k <= base; k++)
			cout << "* ";
		cout << endl;
	}
};
