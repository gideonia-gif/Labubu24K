#include <iostream>
#include "Person.h"
#include "Florist.h" 

Person::Person(std::string name) : name(name) {}

std::string Person::getName() const { return name; }

void Person::orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers) {
    std::cout << name << " orders flowers to " << recipient->getName() 
              << " from Florist " << florist->getName() << ": ";
    
    for (size_t i = 0; i < flowers.size(); ++i) {
        std::cout << flowers[i] << (i == flowers.size() - 1 ? "" : ", ");
    }
    std::cout << "." << std::endl; 

    florist->acceptOrder(recipient, flowers); 
}

void Person::acceptFlowers(FlowersBouquet* bouquet) {
    std::cout << name << " accepts the flowers: ";
    
    std::vector<std::string> flowers = bouquet->getFlowers();
    for (size_t i = 0; i < flowers.size(); ++i) {
        std::cout << flowers[i] << (i == flowers.size() - 1 ? "" : ", ");
    }
    std::cout << "." << std::endl; 
    

}