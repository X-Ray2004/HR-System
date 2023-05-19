#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include <iostream>
#include "employee.h"

using namespace std;


class HourlyEmployee: public Employee
{
private:
    double hoursWorked;
    double rate;
public:

    void addHours(int moreHours);
    double getSalary();
    void getDetails() ;
    double calculatePay();
    void displayDetails();

    HourlyEmployee(int s);


    virtual ~HourlyEmployee();
};

#endif // HOURLYEMPLOYEE_H
