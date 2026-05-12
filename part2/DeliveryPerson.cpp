#include <iostream>
#include "DeliveryPerson.h"
#include "Person.h"
#include "FlowersBouquet.h"

DeliveryPerson::DeliveryPerson(std::string name) : name(name) {}

std::string DeliveryPerson::getName() const {
    return name;
}

void DeliveryPerson::deliver(Person* recipient, FlowersBouquet* bouquet) {
    std::cout << "Delivery Person " << name << " delivers flowers to " << recipient->getName() << "." << std::endl;
    recipient->acceptFlowers(bouquet);
}