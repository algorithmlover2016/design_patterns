#ifndef DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_BUILDERS_BUILDER_H
#define DESIGN_PATTERNS_CREATIONAL_PATTERNS_BUILDER_CPP_BUILDERS_BUILDER_H
#include "head.h"

#include "cars/car.h"

#include "components/components.h"

class Builder {
public:
    virtual void setType(Type type) = 0;
    virtual void setSeats(int seats) = 0;
    virtual void setEngine(Engine* engine) = 0;
    virtual void setTransmission(Transmission transmission) = 0;
    virtual void setTripComputer(TripComputer* tripComputer) = 0;
    virtual void setGPSNavigator(GPSNavigator* gpsNavigator) = 0;

    virtual ~Builder() = 0;
};

class CarBuilder : public Builder {
public:
    void setType(Type type);
    void setSeats(int seats);
    void setEngine(Engine* engine);
    void setTransmission(Transmission transmission);
    void setTripComputer(TripComputer* tripComputer);
    void setGPSNavigator(GPSNavigator* gpsNavigator);

    Car* getResult() {
        return new Car(this->type, this->seats,
                this->engine, this->transmission,
                this->tripComputer, this->gpsNavigator);
    }

private:
    Type type;
    int seats;
    Engine* engine;
    Transmission transmission;
    TripComputer* tripComputer;
    GPSNavigator* gpsNavigator;

};

class CarManualBuilder : public Builder {
public:
    // maybe these function can be implemented in base class
    void setType(Type type);
    void setSeats(int seats);
    void setEngine(Engine* engine);
    void setTransmission(Transmission transmission);
    void setTripComputer(TripComputer* tripComputer);
    void setGPSNavigator(GPSNavigator* gpsNavigator);

    Manual* getResult() {
        return new Manual(this->type, this->seats,
                this->engine, this->transmission,
                this->tripComputer, this->gpsNavigator);
    }

private:
    Type type;
    int seats;
    Engine* engine;
    Transmission transmission;
    TripComputer* tripComputer;
    GPSNavigator* gpsNavigator;
};

#endif
