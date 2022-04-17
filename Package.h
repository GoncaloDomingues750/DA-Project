#ifndef DA_PROJECT_PACKAGE_H
#define DA_PROJECT_PACKAGE_H
using namespace std;

class Package{
public:
    Package(int weight, int volume, int reward, int duration);

    int getWeight() const;
    int getReward() const;
    int getDuration() const;
    int getVolume() const;

    void setWeight(int nWeight);
    void setReward(int nReward);
    void setDuration(int nDuration);
    void setVolume(int nVolume);

private:
    int weight;
    int volume;
    int reward;
    int duration;
};









#endif //DA_PROJECT_PACKAGE_H
