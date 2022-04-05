#ifndef DA_PROJECT_PACKAGE_H
#define DA_PROJECT_PACKAGE_H
using namespace std;

class Package{
public:
    Package(int packageNumber, int weight, int volume, bool priority, int duration);

    int getPackageNumber() const;
    int getWeight() const;
    bool getPriority() const;
    int getDuration() const;
    int getVolume() const;

    void setPackageNumber(int pckNum);
    void setWeight(int nWeight);
    void setPriority(bool nPriority);
    void setDuration(int nDuration);
    void setVolume(int nVolume);

private:
    int packageNumber;
    int weight;
    int volume;
    bool priority;
    int duration;
};









#endif //DA_PROJECT_PACKAGE_H
