#ifndef HEALTHBENEFIT_H
#define HEALTHBENEFIT_H
#include "Benefit.h"
#include <iostream>
#include <string>
using namespace std;

class HealthBenefit: public Benefit
{
    public:
        double calculateBenefit () override
        {
            return (amount*20)/100;
        }
        void displayBenefit()
        {
            calculateBenefit();
          cout<< "Amount: " + to_string(amount) + ", Plan Type: " + planType + ", Coverage: " + coverage;
        }

        HealthBenefit();

        bool flag () {return 1 ;}

        void getDAta()
        {
            cout<<"Enter The detalis of benfits : ";
            cin>>info;
            cout<<"Enter The amount of benfits : ";
            cin>>amount;
            cout<<"Enter The Coverage of benfits : ";
            cin>>coverage;
        }


        virtual ~HealthBenefit();

    protected:

    private:
        string info ;
        string coverage;
};

#endif // HEALTHBENEFIT_H
