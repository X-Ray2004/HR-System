#ifndef MANAGEREMPLOYEE_H
#define MANAGEREMPLOYEE_H
#include "SalariedEmployee.h"
#include <iostream>

using namespace std;


class ManagerEmployee:public SalariedEmployee
{
private:

    double bonus;
public:

    void addBouns( double moreBonus);
    double getSalary();
    void getDetails() ;

    ManagerEmployee(int s);
    virtual ~ManagerEmployee();

protected:


};

#endif // MANAGEREMPLOYEE_H
