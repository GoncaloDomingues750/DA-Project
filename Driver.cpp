#include "Driver.h"

Driver::Driver(int maxVol, int maxWeight, int cost) {
    this->maxVol = maxVol;
    this->maxWeight = maxWeight;
    this->cost = cost;
}

int Driver::getMaxVol() const {
    return maxVol;
}

int Driver::getMaxWeight() const {
    return maxWeight;
}

int Driver::getCost() const {
    return cost;
}

void Driver::setMaxVol(int nMaxVol) {
    maxVol = nMaxVol;
}

void Driver::setMaxWeight(int nMaxWeight) {
    maxWeight = nMaxWeight;
}

void Driver::setCost(int nCost) {
    cost = nCost;
}

