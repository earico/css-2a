#include "LinearEquation.h"
#include <iostream>
#include <string>

LinearEquation::LinearEquation(){
    m = 1;
    b = 1;
    x = 1;
}

LinearEquation::LinearEquation(double m, double b){
    setM(m);
    setB(b);
    x = 1;
}

double LinearEquation::evaluate(double x){
    return (x * m) + b;
}

std::ostream& operator << (std::ostream& out, const LinearEquation& l){
    out << l.m << " + " << l.b;
    return out;
}

LinearEquation operator + (const LinearEquation& l1, const LinearEquation& l2){
    double sum1, sum2;

    sum1 = l1.m + l2.m;
    sum2 = l1.b + l2.b;
    LinearEquation res(sum1, sum2);

    return res;
}

LinearEquation operator - (const LinearEquation& l1, const LinearEquation& l2){
    double sum1, sum2;

    sum1 = l1.m - l2.m;
    sum2 = l1.b - l2.b;
    LinearEquation res(sum1, sum2);

    return res;
}

LinearEquation operator * (const LinearEquation& l1, const double& mule){
    double sum1, sum2;
    sum1 = l1.m * mule;
    sum2 = l1.b * mule;

    LinearEquation res(sum1, sum2);

    return res;
}

LinearEquation operator * (const double& mule, const LinearEquation& l1){
    double sum1, sum2;
    sum1 = l1.m * mule;
    sum2 = l1.b * mule;

    LinearEquation res(sum1, sum2);

    return res;
}