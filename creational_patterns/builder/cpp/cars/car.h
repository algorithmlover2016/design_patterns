#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_CARS_CAR_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_CARS_CAR_H

#include "head.h"
#include "components/components.h"

enum class Type {
    CITY_CAR,
    SPORTS_CAR,
    SUV
};

class TripComputer;

class Car {
public:
    Car(Type type_, int seats_,
            Engine* engine_ = nullptr, Transmission transmission_ = Transmission::SINGLE_SPEED,
            TripComputer* tripCompter_ = nullptr, GPSNavigator* gpsNavigator_ = nullptr);

    Type getType() const; 

    double getFuel() const; 

    void setFuel(double fuel); 

    int getSeats() const;

    Engine const * getEngine() const; 

    Transmission getTransmission() const; 

    TripComputer const * getTripComputer() const; 

    GPSNavigator const * getGPSNavigator() const;

private:
    Type type;
    int seats;
    Engine* engine;
    Transmission transmission;
    TripComputer* tripComputer;
    GPSNavigator* gpsNavigator;
    double fuel = 0;
};

std::ostream& operator<<(std::ostream& os, Car const & car);

class Manual {
public:
    Manual(Type type, int seats,
            Engine* engine = nullptr, Transmission transmission = Transmission::SINGLE_SPEED,
            TripComputer* tripComputer = nullptr, GPSNavigator* gpsNavigator_ = nullptr);
    std::string to_string() const;

private:
    Type type;
    int seats;
    Engine* engine;
    Transmission transmission;
    TripComputer* tripComputer;
    GPSNavigator* gpsNavigator;
};

std::ostream& operator<<(std::ostream&os, Manual const & manual);


class TripComputer {
public: 
    void setCar(Car * car); 

    void setCar(Car & car); 

    void showFuelLevel() const; 

    void showStatus() const;
private:
    Car* car;

};

/*
 *
// Declaration
enum class EnumName{ Value1, Value2, ... ValueN};

// Initialisation
EnumName ObjectName = EnumName::Value;
*/

#endif
