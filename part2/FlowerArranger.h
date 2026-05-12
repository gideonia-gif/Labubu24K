#ifndef FLOWERARRANGER_H
#define FLOWERARRANGER_H

#include <string>
#include "FlowersBouquet.h"

class FlowerArranger {
private:
    std::string name;

public:
    FlowerArranger(std::string name);
    std::string getName() const;

    void arrangeFlowers(FlowersBouquet* bouquet);
};

#endif