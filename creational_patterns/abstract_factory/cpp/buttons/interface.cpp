#include <iostream>
 
using namespace std;
 
class Shape {
public:
	virtual void draw() const;
	virtual void error (const std::string& msg) {std::cout << msg << std::endl;};
	int objectID() const { return 1;};
};
 
void Shape::draw() const {
	std::cout << "Shape Draw!" << std::endl;
}
 
class Rectangle: public Shape {
public:
	void draw() const {std::cout << "Rect Draw!" << std::endl;};
};
class Ellipse: public Shape {
public:
	void draw() const {std::cout << "Elli Draw!" << std::endl;};
};
 
int main () {
	Shape* ps1 = new Rectangle;
	Shape* ps2 = new Ellipse;
	ps1->draw();
	ps2->draw();
	std::cout << "Attention: " << std::endl;
	ps1->Shape::draw();
	ps2->Shape::draw();
	return 0;
}

/*
 *
————————————————
版权声明：本文为CSDN博主「SpikeKing」的原创文章，遵循 CC 4.0 BY-SA 版权协议，转载请附上原文出处链接及本声明。
原文链接：https://blog.csdn.net/caroline_wendy/article/details/22745017
*/
