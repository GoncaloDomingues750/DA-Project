#ifndef DA_PROJECT_PACKAGE_H
#define DA_PROJECT_PACKAGE_H
using namespace std;

class Package{
public:
    Package(int weight, int volume, int reward, int duration);

    int getWeight() const; //Returns the weight of the package
    int getReward() const; //Returns the money you get for delivering that package
    int getDuration() const; //Returns the amount of time it takes to deliver that package
    int getVolume() const; //Returns the volume of the package

    void setWeight(int nWeight); //Sets the weight of the package
    void setReward(int nReward); //Sets the reward of the package
    void setDuration(int nDuration); //Sets the duration of the package
    void setVolume(int nVolume); //Sets the volume of the package

private:
    int weight; //Package weight
    int volume; //Package volume
    int reward; //The money you get for delivering that package
    int duration; //The amount of time it takes to deliver that package
};









#endif //DA_PROJECT_PACKAGE_H
