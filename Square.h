class Square : public Shape {
protected:
	int length;
public:
	Square(int sidelength)
		:length(sidelength) {}
	virtual double area() {
		return length*length;
	}
	virtual void draw() {
		for (int i = 0; i < length; i++) {
			for (int j = 0; j < length; j++){
				if (i == 0 || i == length -1)
					cout << "* ";
				else if (i > 0 && i < length - 1 && j == 0 || j == length - 1)
					cout << "* ";
				else
					cout << "  ";
			}
			cout << endl;
		}

	}
};