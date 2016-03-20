#include<iostream>
#include<string>
using namespace std ;
class BMI{
public:
    BMI();
    void setHight(int h);
    void setMass(int m);
    int getHight();
    int getMass();
    string category(float BMI);
    float calculateBMI();
private:
    int hight;
    int mass;
};
