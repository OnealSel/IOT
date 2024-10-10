#include "Server.h"
#include <ctime> // Pour obtenir l'horodatage
#include <sstream>

Server::Server() {}
Server::~Server() {}

void Server::consoleWrite(const std::string& data) {
    std::cout << "Data: " << data << std::endl;
}

void Server::fileWrite(const std::string& filename, const std::string& data) {
    std::ofstream outFile(filename, std::ios::app);
    if (outFile.is_open()) {
        // Ajoute l'horodatage
        std::time_t now = std::time(nullptr);
        outFile << std::asctime(std::localtime(&now)) << " - " << data << std::endl;
        outFile.close();
    } else {
        std::cerr << "Erreur d'ouverture du fichier." << std::endl;
    }
}

void Server::analyzeData(const std::string& data) {
    std::istringstream iss(data);
    std::string sensorType;
    float value;

    iss >> sensorType >> value;

    // Exemple d'analyse basique
    if (sensorType == "Temperature" && value > 25.0f) {
        consoleWrite("Alerte : Température trop élevée !");
    } else if (sensorType == "Humidity" && value < 30.0f) {
        consoleWrite("Alerte : Humidité trop basse !");
    }
}
