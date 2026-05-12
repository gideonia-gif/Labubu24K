#include <iostream>
#include "Grower.h"
#include "Gardener.h"
#include "FlowersBouquet.h"

Grower::Grower(std::string name, Gardener* gardener) : name(name), gardener(gardener) {}

std::string Grower::getName() const {
    return name;
}

FlowersBouquet* Grower::prepareOrder(std::vector<std::string> flowers) {
    std::cout << "Grower " << name << " forwards the request to Gardener " << gardener->getName() << "." << std::endl;
    
    FlowersBouquet* bouquet = gardener->prepareBouquet(flowers);
    
    std::cout << "Gardener " << gardener->getName() << " returns flowers to Grower " << name << "." << std::endl;
    return bouquet;
}