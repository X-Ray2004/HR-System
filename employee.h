#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include "Benefit.h"
#include "HealthBenefit.h"
#include "DentalBenefit.h"
#include "department.h"

using namespace std;

class Employee
{
protected:
    int ID;
    string name;
    string phone;
    string email;
    string jobTitle;
    int cBenefit;
    department *m_department;

private:

    Benefit benefitList[2];

public:

    int getID();
    virtual void displayDetails();
    virtual double getSalary()=0;
    double calculatePay();
    void getData();
    virtual void getDetails()=0;
    void addBenifit();
    void showBenfits();

    Employee(int s2);
    ~Employee();

};

#endif // EMPLOYEE_H
