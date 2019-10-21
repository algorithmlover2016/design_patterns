#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_COMPONENTS_ENGINE_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_COMPONENTS_ENGINE_H

#include "head.h"

class Engine {
public:
    Engine(double volume_, double mileage_);
    void on(); 
    void off(); 
    bool isStarted() const; 
    void go(double mileage);

    double getVolume() const; 

    double getMileage() const; 

private:
    const double volume;
    double mileage;
    bool started;
};

class GPSNavigator {
public:
    GPSNavigator(std::string const & route_ = "221b, Baker Street, London  to Scotland Yard, 8-10 Broadway, London") :
        route(route_) {
    }
    std::string getRoute() {
        return route;
    }
private:
    std::string route;

};

enum class Transmission {
    SINGLE_SPEED,
    MANUAL,
    AUTOMATIC,
    SEMI_AUTOMATIC
};


#endif
