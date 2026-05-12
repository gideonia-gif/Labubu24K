#include <iostream>
#include "Wholesaler.h"

Wholesaler::Wholesaler(std::string name, Grower* grower) 
    : name(name), grower(grower) {}

std::string Wholesaler::getName() const {
    return name;
}
FlowersBouquet* Wholesaler::acceptOrder(std::vector<std::string> flowers) {
    std::cout << "Wholesaler " << name << " forwards the request to Grower " << grower->getName() << "." << std::endl;
    
    FlowersBouquet* bouquet = grower->prepareOrder(flowers);
    
    std::cout << "Grower " << grower->getName() << " returns flowers to Wholesaler " << name << "." << std::endl;
    return bouquet;
}