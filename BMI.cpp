#include"BMI.h"
BMI::BMI(){hight = 0 ; mass = 0 ;}

void BMI::setHight(int h){
    hight = h ;
}

void BMI::setMass(int m){
    mass = m ;
}

int BMI::getHight(){
    return hight;
}

int BMI::getMass(){
    return mass;
}

float BMI::calculateBMI(){
    int  h = 0 ,m = 0;
    float  bmi  ;
    h = getHight();
    m = getMass()*100*100;
    bmi = float(m)/float(h)/float(h);
    return bmi;
}

string BMI::category(float BMI){
    string category;
    if (BMI < 15)
        category = "Very severely underweight" ;
    else if (BMI >= 15 && BMI < 16 )
        category = "Severely underweight" ;
    else if (BMI >= 16 && BMI < 18.5 )
        category = "Underweight" ;
    else if (BMI >= 18.5 && BMI < 25 )
        category = "Normal" ;
    else if (BMI >= 25 && BMI < 30 )
        category = "Overweight" ;
    else if (BMI >= 30 && BMI < 35 )
        category = "Obese Class I (Moderately obese)" ;
    else if (BMI >= 35 && BMI < 40 )
        category = "Obese Class II (Severely obese)" ;
    else if (BMI >= 40   )
        category = "Obese Class III (Very severely obese)" ;

    return category;
}
