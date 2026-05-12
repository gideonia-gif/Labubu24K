#ifndef FLORIST_H
#define FLORIST_H

#include <string>
#include <vector>
#include "Wholesaler.h"
#include "FlowerArranger.h"
#include "DeliveryPerson.h"
#include "Person.h"

class Florist {
private:
    std::string name;
    Wholesaler* wholesaler;
    FlowerArranger* flowerArranger;
    DeliveryPerson* deliveryPerson;

public:
    Florist(std::string name, Wholesaler* wholesaler, FlowerArranger* flowerArranger, DeliveryPerson* deliveryPerson);
    std::string getName() const;
    
    void acceptOrder(Person* recipient, std::vector<std::string> flowers);
};

#endif