#include "Package.h"

Package::Package(int weight, int volume, int reward, int duration) {
    this->weight = weight;
    this->volume = volume;
    this->reward = reward;
    this->duration = duration;
}


int Package::getWeight() const {
    return weight;
}

int Package::getReward() const {
    return reward;
}

void Package::setWeight(int nWeight) {
    weight = nWeight;
}

void Package::setReward(int nReward) {
    reward = nReward;
}

int Package::getDuration() const {
    return duration;
}

void Package::setDuration(int nDuration) {
    duration = nDuration;
}

int Package::getVolume() const {
    return volume;
}

void Package::setVolume(int nVolume) {
    volume = nVolume;
}




