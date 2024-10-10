#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include "Sensor.h"
#include <cstdlib> // Pour générer des valeurs aléatoires

class TemperatureSensor : public Sensor {
public:
    TemperatureSensor(Server* server, int interval);
    virtual std::string generateData() override;
};

#endif
