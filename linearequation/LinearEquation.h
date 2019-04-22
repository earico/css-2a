#ifndef LINEAREQUATION_H
#define LINEAREQUATION_H
#include <fstream>

class LinearEquation {
    public:
        LinearEquation();
        LinearEquation(double m, double b);

        double evaluate(double x);

        double getM()const{return m;}
        double getB()const{return b;}

        void setM(double m){this->m = m;}
        void setB(double b){this->b = b;}

        friend std::ostream& operator << (std::ostream& out, const LinearEquation& f);
        friend LinearEquation operator + (const LinearEquation& l1, const LinearEquation& l2);
        friend LinearEquation operator - (const LinearEquation& l1, const LinearEquation& l2);
        friend LinearEquation operator * (const LinearEquation& l1, const double& mule);
        friend LinearEquation operator * (const double& mule, const LinearEquation& l1);

    protected:
        double m, b, x;
};

#endif // LINEAREQUATION_H