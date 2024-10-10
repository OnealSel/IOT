#include "LightSensor.h"

LightSensor::LightSensor(Server* server, int interval)
    : Sensor("Light", server, interval) {}

std::string LightSensor::generateData() {
    bool lightOn = rand() % 2;
    return "Light Sensor ID " + std::to_string(id) + ": " + (lightOn ? "ON" : "OFF");
}
