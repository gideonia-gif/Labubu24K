#include "FlowersBouquet.h"

FlowersBouquet::FlowersBouquet(std::vector<std::string> flowers) 
    : bouquet(flowers), is_arranged(false) {}

void FlowersBouquet::arrange() {
    is_arranged = true;
}

std::vector<std::string> FlowersBouquet::getFlowers() const { return bouquet; }
bool FlowersBouquet::isArranged() const { return is_arranged; }