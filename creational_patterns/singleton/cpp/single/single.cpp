#include "single/single.h"

Singleton* Singleton::_instance = nullptr;
Singleton const & Singleton::getRefInstance() {
    if (nullptr == _instance) {
        _instance = new Singleton();
    }
    // static std::auto_ptr<Singleton> _instance(new Singleton);
    return *_instance;
}

Singleton* Singleton::getPtrInstance() {
    if (nullptr == _instance) {
        _instance = new Singleton();
    }
    // static std::auto_ptr<Singleton> _instance(new Singleton);
    return _instance;
}
