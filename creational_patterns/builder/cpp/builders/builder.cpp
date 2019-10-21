#include "builders/builder.h"

Builder::~Builder() {
}

void CarBuilder::setType(Type type) {
    this->type = type;
}

void CarBuilder::setSeats(int seats) {
    this->seats = seats;
}

void CarBuilder::setEngine(Engine* engine) {
    this->engine = engine;
}

void CarBuilder::setTransmission(Transmission transmission) {
    this->transmission = transmission;
}

void CarBuilder::setTripComputer(TripComputer* tripComputer) {
    this->tripComputer = tripComputer;
}

void CarBuilder::setGPSNavigator(GPSNavigator* gpsNavigator) {
    this->gpsNavigator = gpsNavigator;
}


void CarManualBuilder::setType(Type type) {
    this->type = type;
}

void CarManualBuilder::setSeats(int seats) {
    this->seats = seats * 2;
}

void CarManualBuilder::setEngine(Engine* engine) {
    this->engine = engine;
}

void CarManualBuilder::setTransmission(Transmission transmission) {
    this->transmission = transmission;
}

void CarManualBuilder::setTripComputer(TripComputer* tripComputer) {
    this->tripComputer = tripComputer;
}

void CarManualBuilder::setGPSNavigator(GPSNavigator* gpsNavigator) {
    this->gpsNavigator = gpsNavigator;
}
