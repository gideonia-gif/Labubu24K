#include <iostream>
#include "Florist.h"

Florist::Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* arranger, DeliveryPerson* delivery) 
    : name(name), wholesaler(wholesaler), flowerArranger(arranger), deliveryPerson(delivery) {}

std::string Florist::getName() const { return name; }

void Florist::acceptOrder(Person* recipient, std::vector<std::string> flowers) {
    std::cout << "Florist " << name << " forwards request to Wholesaler " << wholesaler->getName() << "." << std::endl;
    FlowersBouquet* bouquet = wholesaler->acceptOrder(flowers); 
    
    std::cout << "Florist " << name << " request flowers arrangement from Flower Arranger " << flowerArranger->getName() << "." << std::endl;
    flowerArranger->arrangeFlowers(bouquet);
    
    std::cout << "Florist " << name << " forwards flowers to Delivery Person " << deliveryPerson->getName() << "." << std::endl;
    deliveryPerson->deliver(recipient, bouquet); 
}