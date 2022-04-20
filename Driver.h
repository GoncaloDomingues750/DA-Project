#ifndef DA_PROJECT_DRIVER_H
#define DA_PROJECT_DRIVER_H
using namespace std;

class Driver{
public:
    Driver(int maxVol, int maxWeight, int cost); //Creates a driver object using the maxVol, maxWeight and cost parameters

    int getMaxVol() const; //Returns the maximum volume the driver can carry
    int getMaxWeight() const; //Returns the maximum weight the driver can carry
    int getCost() const; //Returns the cost you need to pay the driver for him to deliver the package

    void setMaxVol(int nMaxVol); //Sets the maximum volume the driver can carry
    void setMaxWeight(int nMaxWeight); //Sets the maximum weight the driver can carr
    void setCost(int nCost); //Sets the cost you need to pay the driver for him to deliver the package

private:
    int maxVol; //Maximum volume the driver can carry
    int maxWeight; //Maximum weight the driver can carry
    int cost; //Cost you need to pay the driver for him to deliver the package
};






#endif //DA_PROJECT_DRIVER_H
