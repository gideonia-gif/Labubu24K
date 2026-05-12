#ifndef DELIVERYPERSON_H
#define DELIVERYPERSON_H

#include <string>

class Person;
class FlowersBouquet;

class DeliveryPerson {
private:
    std::string name;

public:
    DeliveryPerson(std::string name);
    std::string getName() const; 
    void deliver(Person* recipient, FlowersBouquet* bouquet);
};

#endif