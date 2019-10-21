#include "head.h"
#include "builders/builder.h"
#include "cars/car.h"
#include "director/director.h"
int main() {
    Director* director = new Director();
    CarBuilder* builder = new CarBuilder();
    director->constructorSportCar(*builder);

    Car* car = builder->getResult();
    std::cout << *car << std::endl;

    CarManualBuilder* manualBuilder = new CarManualBuilder();
    director->constructorCityCar(*manualBuilder);
    std::cout << *(manualBuilder->getResult()) << std::endl;

    CarManualBuilder* suvBuilder = new CarManualBuilder();
    director->constructorSUV(*suvBuilder);
    std::cout << *(suvBuilder->getResult()) << std::endl;


    return 0;
}
