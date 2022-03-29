#ifndef DA_PROJECT_PACKAGE_H
#define DA_PROJECT_PACKAGE_H
using namespace std;

class Package{
public:
    Package(int packageNumber, int weight, bool priority, int duration);

    int getPackageNumber() const;
    int getWeight() const;
    bool getPriority() const;
    int getDuration() const;

    void setPackageNumber(int pckNum);
    void setWeight(int nWeight);
    void setPriority(bool nPriority);
    void setDuration(int nDuration);

private:
    int packageNumber;
    int weight;
    bool priority;
    int duration;
};









#endif //DA_PROJECT_PACKAGE_H
