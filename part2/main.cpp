#include <iostream>
#include <vector>
#include <string>

#include "Person.h"
#include "Florist.h"
#include "Wholesaler.h"
#include "Grower.h"
#include "Gardener.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"

int main() {
    // 1. Setup the flow of communication
    Gardener* garett = new Gardener("Garett");
    Grower* gray = new Grower("Gray", garett);
    Wholesaler* watson = new Wholesaler("Watson", gray);
    FlowerArranger* flora = new FlowerArranger("Flora");
    DeliveryPerson* dylan = new DeliveryPerson("Dylan");
    Florist* fred = new Florist("Fred", watson, flora, dylan);

    // 2. Setup the people
    Person* chris = new Person("Chris");
    Person* robin = new Person("Robin");

    // 3. Setup the order
    std::vector<std::string> order = {"Roses", "Violets", "Gladiolus"};

    // 4. Start the simulation
    chris->orderFlowers(fred, robin, order);

    // 5. Cleanup memory
    delete garett;
    delete gray;
    delete watson;
    delete flora;
    delete dylan;
    delete fred;
    delete chris;
    delete robin;

    return 0;
}