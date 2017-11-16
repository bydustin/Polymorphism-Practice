#include "Shape.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Circle.h"

typedef class ShapeLinkedListPair * ShapeLinkedList;
class ShapeLinkedListPair
{
public:
	Shape * info;
	ShapeLinkedList next;
	ShapeLinkedListPair(Shape * newInfo, ShapeLinkedList newNext)
		: info(newInfo), next(newNext)
	{
	}
};
class Picture
{
	ShapeLinkedList head;
public:
	Picture()
		: head(0)
	{
	}
	void enter(Shape * a)
	{
		//cout << "Adding 1" << endl;
		head = new ShapeLinkedListPair(a, head);
	}
	double totalArea()
	{
		double total = 0.0;
		for (ShapeLinkedList p = head; p != 0; p = p->next)
			total += p->info->area();
		return total;
		delete head;
	}
	void drawAll() {
		for (ShapeLinkedList p = head; p != 0; p = p->next) {
			p->info->draw();
			cout << endl;
		}
	}
	virtual ~Picture() {
		ShapeLinkedList temp;
		for (ShapeLinkedList p = head; p != NULL;)
		{
			//cout << "Subtracting 1" << endl;
			temp = p;
			p = p->next;
			delete temp;
		}
	}
};
