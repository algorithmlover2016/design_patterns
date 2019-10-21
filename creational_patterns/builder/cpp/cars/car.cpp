#include "components/components.h"
#include "cars/car.h"
#include "enums/enum.hpp"

Car::Car(Type type_, int seats_,
            Engine* engine_, Transmission transmission_,
            TripComputer* tripComputer_, GPSNavigator* gpsNavigator_) :
    type(type_), seats(seats_), engine(engine_), transmission(transmission_),
    tripComputer(tripComputer_), gpsNavigator(gpsNavigator_), fuel(2.0) {
}

Type Car::getType() const {
    return type;
}

double Car::getFuel() const {
    return fuel;
}

void Car::setFuel(double fuel) {
    this->fuel = fuel;
}

int Car::getSeats() const {
    return seats;
}

Engine const * Car::getEngine() const {
    return engine;
}

Transmission Car::getTransmission() const {
    return transmission;
}

TripComputer const * Car::getTripComputer() const {
    return tripComputer;
}

GPSNavigator const * Car::getGPSNavigator() const {
    return gpsNavigator;
}

std::ostream& operator<<(std::ostream & buffer, Car const & car) {
    buffer << "Type of Manual: " << car.getType() << std::endl;
    buffer << "Counts of seats: " << car.getSeats() << std::endl;
    buffer << "Engine: volume - " << car.getEngine()->getVolume() << ";\t"
        << "mileage - " << car.getEngine()->getMileage() << std::endl;
    buffer << "Transmission: " << car.getTransmission() << std::endl;

    if (car.getTripComputer() != nullptr) {
        buffer << "Trip Computer: Functional" << std::endl;
    } else {
        buffer << "Trip Computer: N/A" << std::endl;
    }

    if (car.getGPSNavigator() != nullptr) {
        buffer << "GPS Navigator: Functional" << std::endl;
    } else {
        buffer << "GPS Navigator: N/A" << std::endl;
    }

    return buffer;

}

Manual::Manual(Type type_, int seats_,
        Engine* engine_, Transmission transmission_,
        TripComputer* tripComputer_, GPSNavigator* gpsNavigator_) :
    type(type_), seats(seats_), engine(engine_), transmission(transmission_),
    tripComputer(tripComputer_), gpsNavigator(gpsNavigator_) {
    }

std::string Manual::to_string() const {
    std::ostringstream buffer;
    buffer << "Type of Manual: " << type << std::endl;
    buffer << "Counts of seats: " << seats << std::endl;
    buffer << "Engine: volume - " << engine->getVolume() << ";\t"
        << "mileage - " << engine->getMileage() << std::endl;
    buffer << "Transmission: " << transmission << std::endl;
    if (this->tripComputer != nullptr) {
        buffer << "Trip Computer: Functional" << std::endl;
    } else {
        buffer << "Trip Computer: N/A" << std::endl;
    }

    if (this->gpsNavigator != nullptr) {
        buffer << "GPS Navigator: Functional" << std::endl;
    } else {
        buffer << "GPS Navigator: N/A" << std::endl;
    }
    return buffer.str();
}

std::ostream& operator<<(std::ostream & os, Manual const & manual) {
    os << manual.to_string();
    return os;
};

void TripComputer::setCar(Car * car) {
    this->car = car;
}

void TripComputer::setCar(Car & car) {
    this->car = &car;
}

void TripComputer::showFuelLevel() const {
    std::cout << "Fuel level: " << car->getFuel() << std::endl;
}

void TripComputer::showStatus() const {
    if (car->getEngine()->isStarted()) {
        std::cout << "Car is started" << std::endl;
    } else {
        std::cout << "Car isn't started" << std::endl;
    }
}
