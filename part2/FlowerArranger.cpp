#include <iostream>
#include "FlowerArranger.h"
#include "FlowersBouquet.h" 

FlowerArranger::FlowerArranger(std::string name) : name(name) {}

std::string FlowerArranger::getName() const { return name; }

void FlowerArranger::arrangeFlowers(FlowersBouquet* bouquet) { 
    std::cout << "Flower Arranger " << name << " arranges flowers." << std::endl; 
    
    bouquet->arrange(); 
    std::cout << "Flower Arranger " << name << " returns arranged flowers to Florist Fred." << std::endl; 
}