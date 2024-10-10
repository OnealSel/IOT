#include "Sensor.h"

int Sensor::nextId = 1; // Initialisation de la variable statique

Sensor::Sensor(const std::string& type, Server* server, int interval)
    : id(getNextId()), type(type), server(server), interval(interval), lastUpdate(std::chrono::steady_clock::now()) {}

Sensor::~Sensor() {}

void Sensor::update() {
    auto now = std::chrono::steady_clock::now();
    std::chrono::duration<double> elapsed_seconds = now - lastUpdate;

    if (elapsed_seconds.count() >= interval) {
        std::string data = generateData();
        server->consoleWrite(data);
        server->fileWrite(type + "_log.txt", data);
        lastUpdate = now; // Met à jour le temps de la dernière mise à jour
    }
}

int Sensor::getNextId() {
    return nextId++;
}
