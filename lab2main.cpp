#include<iostream>
#include"BMI.h"
#include<fstream>
#include<cstdlib>
#include<iomanip>
using namespace std ;
int main ()
{
BMI BMI;
int hight , mass ;
string message;
float bmi;
//declare inFile class as a ifstream
ifstream inFile("file.in",ios::in);
if(!inFile){
    cerr<<"Failed open input file!"<<endl;
    exit(1);
}
//declare outFile class as a ofstream
ofstream outFile("file.out",ios::out);
if(!outFile){
    cerr<<"Failed open output file!"<<endl;
    exit(1);
}
inFile>>hight;
inFile>>mass;
while(hight != 0){
    BMI.setHight(hight);
    BMI.setMass(mass);
    bmi = BMI.calculateBMI();
    message = BMI.category(bmi);
    outFile<<setprecision(5)<<bmi<<"\t"<<message<<endl;
    inFile>>hight;
    inFile>>mass;
}
return 0;
}
