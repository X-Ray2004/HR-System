#ifndef DENTALBENEFIT_H
#define DENTALBENEFIT_H
#include <iostream>
#include <string>
#include "Benefit.h"

using namespace std;


class DentalBenefit : public Benefit
{
 public:
        double calculateBenefit  () override
        {
            return (amount*10)/100;
        }
        void displayBenefit()
        {
            calculateBenefit();
        cout<< "Amount: " + to_string(amount) + ", Plan Type: " + planType;
        }
        bool flag ()
        {return 0;}

        void getDAta()
        {
            cout<<"Enter The detalis of benfits : ";
            cin>>info;
            cout<<"Enter The amount of benfits : ";
            cin>>amount;

        }


        DentalBenefit();
        virtual ~DentalBenefit();

    protected:

    private:
        string info ;
};

#endif // DENTALBENEFIT_H
