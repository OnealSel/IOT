#ifndef HUMIDITY_SENSOR_H
#define HUMIDITY_SENSOR_H

#include "Sensor.h"
#include <cstdlib>

class HumiditySensor : public Sensor {
public:
    HumiditySensor(Server* server, int interval);
    virtual std::string generateData() override;
};

#endif
