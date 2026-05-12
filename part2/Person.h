#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <vector>
#include "FlowersBouquet.h"

class Florist; 

class Person {
private:
    std::string name;

public:
    Person(std::string name);
    std::string getName() const;
    void orderFlowers(Florist* florist, Person* recipient, std::vector<std::string> flowers); 
    void acceptFlowers(FlowersBouquet* bouquet); 
};

#endif