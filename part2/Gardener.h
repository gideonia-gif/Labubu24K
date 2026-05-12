#ifndef GARDENER_H
#define GARDENER_H

#include <string>
#include <vector>

class FlowersBouquet;

class Gardener {
private:
    std::string name;

public:
    Gardener(std::string name);
    std::string getName() const;
    FlowersBouquet* prepareBouquet(std::vector<std::string> flowers);
};

#endif