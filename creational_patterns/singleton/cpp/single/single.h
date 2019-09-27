#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_SINGLETON_CPP_SINGLE_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_SINGLETON_CPP_SINGLE_H
#include "head.h"
class Singleton {
public:
    static Singleton const& getRefInstance(); 
    static Singleton*  getPtrInstance(); 

    // get and set value
    void setValue(std::string const & str = "empty") {
        value = str;
    }

    std::string getValue() const {
        return value;
    }

private:
    Singleton() {
    }
    Singleton(Singleton const & old);
    ~Singleton() {}
private:
    static Singleton* _instance;
    std::string value;
};
#endif
