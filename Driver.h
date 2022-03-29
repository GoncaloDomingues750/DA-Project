#ifndef DA_PROJECT_DRIVER_H
#define DA_PROJECT_DRIVER_H
using namespace std;

class Driver{
public:
    Driver(int maxVol, int maxWeight, int cost);

    int getMaxVol() const;
    int getMaxWeight() const;
    int getCost() const;

    void setMaxVol(int nMaxVol);
    void setMaxWeight(int nMaxWeight);
    void setCost(int nCost);

private:
    int maxVol;
    int maxWeight;
    int cost;
};






#endif //DA_PROJECT_DRIVER_H
