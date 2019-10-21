#include "components/components.h"

Engine::Engine(double volume_, double mileage_):
    volume(volume_), mileage(mileage_) {
}

void Engine::on() {
    started = true;
}

void Engine::off() {
    started = false;
}

bool Engine::isStarted() const {
    return started;
}

void Engine::go(double mileage) {
    if (started) {
        this->mileage += mileage;
    } else {
        std::cout << "Cannot go(), you must start engine first!" << std::endl;
    }
}

double Engine::getVolume() const {
    return volume;
}

double Engine::getMileage() const {
    return mileage;
}

