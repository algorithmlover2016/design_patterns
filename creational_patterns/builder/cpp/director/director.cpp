#include "director/director.h"
#include "components/components.h"
#include "cars/car.h"

void Director::constructorSportCar(Builder & builder) {
    builder.setType(Type::SPORTS_CAR);
    builder.setSeats(2);
    builder.setEngine(new Engine(3.0, 0));
    builder.setTransmission(Transmission::SEMI_AUTOMATIC);
    builder.setTripComputer(new TripComputer());
    builder.setGPSNavigator(new GPSNavigator());
}

void Director::constructorCityCar(Builder &  builder) {
    builder.setType(Type::CITY_CAR);
    builder.setSeats(5);
    builder.setEngine(new Engine(1.3, 0));
    builder.setTransmission(Transmission::AUTOMATIC);
    builder.setTripComputer(new TripComputer());
    builder.setGPSNavigator(new GPSNavigator());
}

void Director::constructorSUV(Builder & builder) {
    builder.setType(Type::SUV);
    builder.setSeats(4);
    builder.setEngine(new Engine(4.3, 0));
    builder.setTransmission(Transmission::MANUAL);
    builder.setTripComputer(new TripComputer());
    builder.setGPSNavigator(new GPSNavigator());
}
