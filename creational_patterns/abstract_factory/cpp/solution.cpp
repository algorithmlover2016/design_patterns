#include "./head.h"

class Window {
public:
    virtual void get() {
        std::cout << "call get function in Window" << std::endl;
        std::cout << "width: " << width << "\t" << "length: " << length << std::endl;
    }
    virtual void set(int width, int length) {
        std::cout << "call set function in Window" << std::endl;
        this->width = width;
        this->length = length;
    }
    virtual long area() {
        return width * length;
    }
    virtual long 
private:
    int width;
    int length;
}
