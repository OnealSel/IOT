#include "HumiditySensor.h"

HumiditySensor::HumiditySensor(Server* server, int interval)
    : Sensor("Humidity", server, interval) {}

std::string HumiditySensor::generateData() {
    int humidity = rand() % 41 + 30; // Génère un nombre entre 30 et 70
    return "Humidity Sensor ID " + std::to_string(id) + ": " + std::to_string(humidity) + " %";
}
