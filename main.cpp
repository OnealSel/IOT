#include "Server.h"
#include "Scheduler.h"
#include "TemparatureSensor.h"
#include "HumiditySensor.h"
#include "LightSensor.h"
#include <ctime>

int main() {
    srand(time(0)); // Initialisation du générateur de nombres aléatoires

    Server server;
    Scheduler scheduler;

    // Création de capteurs avec des intervalles différents
    Sensor* tempSensor = new TemperatureSensor(&server, 5); // Mise à jour toutes les 5 secondes
    Sensor* humidSensor = new HumiditySensor(&server, 10); // Mise à jour toutes les 10 secondes
    Sensor* lightSensor = new LightSensor(&server, 15); // Mise à jour toutes les 15 secondes

    // Ajout des capteurs au scheduler
    scheduler.addSensor(tempSensor);
    scheduler.addSensor(humidSensor);
    scheduler.addSensor(lightSensor);

    // Lancer la simulation (pour simplifier, tu peux la boucler manuellement ou utiliser un intervalle)
    scheduler.simulation();

    // Libérer la mémoire
    delete tempSensor;//liberer
    delete humidSensor;
    delete lightSensor;

    return 0;
}
