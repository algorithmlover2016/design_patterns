#include "single/single.h"

int main() {
    Singleton* singleton = Singleton::getPtrInstance();
    Singleton const & singletonRef = Singleton::getRefInstance();
    singleton->setValue();
    std::cout << singletonRef.getValue() << std::endl;
    singleton->setValue("change value now");

    singleton = Singleton::getPtrInstance();
    std::cout << singletonRef.getValue() << std::endl;

    singleton->setValue("change value again");
    std::cout << singletonRef.getValue() << std::endl;
    return 0;
}
