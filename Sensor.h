#ifndef SENSOR_H
#define SENSOR_H

#include <string>
#include "Server.h"
#include <chrono>

class Sensor {
public:
    Sensor(const std::string& type, Server* server, int interval);
    virtual ~Sensor();

    virtual void update();
    virtual std::string generateData() = 0; // Méthode abstraite
    int getInterval() const;
    static int getNextId();

protected:
    int id;
    std::string type;
    Server* server;
    int interval; // Intervalle en secondes entre chaque mesure
    std::chrono::time_point<std::chrono::steady_clock> lastUpdate; // Dernière mise à jour

    static int nextId; // Variable statique pour générer des identifiants uniques
};

#endif
