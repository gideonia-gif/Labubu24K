#include <iostream>
#include "Gardener.h"

Gardener::Gardener(std::string name) : name(name) {}

FlowersBouquet* Gardener::prepareBouquet(std::vector<std::string> flowers) {
    std::cout << "Gardener " << name << " prepares flowers." << std::endl;
    return new FlowersBouquet(flowers); 
}