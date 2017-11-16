class Rectangle : public Square {
protected:
	int width;
public:
	Rectangle(int length, int side2)
		:Square(length), width(side2) {
	}
	virtual double area() {
		return length * width;
	}
	virtual void draw() {
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < width; j++) {
				if (i == 0 || i == length - 1)
					cout << "* ";
				else if (i > 0 && i < length - 1 && j == 0 || j == width - 1)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}
	}
};
