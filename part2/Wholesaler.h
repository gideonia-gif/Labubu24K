#ifndef WHOLESALER_H
#define WHOLESALER_H

#include <string>
#include <vector>
#include "Grower.h"

class Wholesaler {
private:
    std::string name;
    Grower* grower; 

public:
    Wholesaler(std::string name, Grower* grower);
    std::string getName() const; 
    FlowersBouquet* acceptOrder(std::vector<std::string> flowers);
};


#endif