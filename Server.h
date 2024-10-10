#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <iostream>
#include <fstream>

class Server {
public:
    Server();
    ~Server();

    void consoleWrite(const std::string& data);
    void fileWrite(const std::string& filename, const std::string& data);
    void analyzeData(const std::string& data); // Analyse des données

private:
    // Membres pour stocker l'historique des données, seuils, etc.
};

#endif
