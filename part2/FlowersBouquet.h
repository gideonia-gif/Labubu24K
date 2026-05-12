#ifndef FLOWERSBOUQUET_H
#define FLOWERSBOUQUET_H

#include <vector>
#include <string>

class FlowersBouquet {
private:
    std::vector<std::string> bouquet;
    bool is_arranged; 

public:
    FlowersBouquet(std::vector<std::string> flowers); 
    void arrange();
    
    std::vector<std::string> getFlowers() const;
    bool isArranged() const;
};

#endif