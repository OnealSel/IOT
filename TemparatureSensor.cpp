#include "TemparatureSensor.h"

TemparatureSensor::TemparatureSensor(Server* server, int interval)
    : Sensor("Temperature", server, interval) {}

std::string TemparatureSensor::generateData() {
    float temperature = 15.0f + static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / (25.0f - 15.0f)));
    return "Temperature Sensor ID " + std::to_string(id) + ": " + std::to_string(temperature) + " °C";
}
//hfb"àrhufvb"rh