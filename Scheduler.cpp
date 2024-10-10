#include "Scheduler.h"

Scheduler::Scheduler() {}

Scheduler::~Scheduler() {
    for (auto sensor : sensors) {
        delete sensor;
    }
}

void Scheduler::addSensor(Sensor* sensor) {
    sensors.push_back(sensor);
}

void Scheduler::simulation() {
    while (true) {
        for (auto sensor : sensors) {
            sensor->update();
        }
        std::this_thread::sleep_for(std::chrono::seconds(1)); // Simule un cycle d'une seconde
    }
}
