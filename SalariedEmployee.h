#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H
#include "employee.h"
#include <iostream>

using namespace std;


class SalariedEmployee :public Employee
{
public:
    double salary;
   virtual double getSalary();
   virtual void getDetails();

    SalariedEmployee(int s);
    SalariedEmployee(int s,double sal);

    virtual ~SalariedEmployee();

protected:

private:
};

#endif // SALARIEDEMPLOYEE_H
