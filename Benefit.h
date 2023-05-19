#ifndef BENEFIT_H
#define BENEFIT_H
#include <iostream>


using namespace std;


class Benefit
{
protected:
    string planType;
    double amount;
private:
public:

   virtual double calculateBenefit();
    virtual void displayBenefit();
    bool flag();
    virtual void getDAta();

    Benefit();
    virtual ~Benefit();


};

#endif // BENEFIT_H
