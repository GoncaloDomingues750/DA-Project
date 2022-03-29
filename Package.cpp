#include "Package.h"

Package::Package(int packageNumber, int weight, bool priority, int duration) {
    this->packageNumber = packageNumber;
    this->weight = weight;
    this->priority = priority;
    this->duration = duration;
}

int Package::getPackageNumber() const {
    return packageNumber;
}

int Package::getWeight() const {
    return weight;
}

bool Package::getPriority() const {
    return priority;
}

void Package::setPackageNumber(int pckNum) {
    packageNumber = pckNum;
}

void Package::setWeight(int nWeight) {
    weight = nWeight;
}

void Package::setPriority(bool nPriority) {
    priority = nPriority;
}

int Package::getDuration() const {
    return duration;
}

void Package::setDuration(int nDuration) {
    duration = nDuration;
}




