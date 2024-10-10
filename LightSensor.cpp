 #ifndef LIGHT_SENSOR_H
#define LIGHT_SENSOR_H

#include "Sensor.h"

class LightSensor : public Sensor {
public:
    LightSensor(Server* server, int interval);
    virtual std::string generateData() override;
};

#endif
