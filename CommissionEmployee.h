#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include <iostream>
#include "Employee.h"

using namespace std;

class CommissionEmployee : public Employee
{
public:

    double target;
    double rate;

    double getSalary();
    void getDetails();
    void displayDetails() override;

     CommissionEmployee(int s);
    ~CommissionEmployee();

protected:

private:
};
#endif // COMMISSIONEMPLOYEE_H
