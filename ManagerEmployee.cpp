#include "ManagerEmployee.h"
#include <iostream>

using namespace std;

ManagerEmployee::ManagerEmployee(int s=10):SalariedEmployee(s)
{
    salary=1000;
}

double ManagerEmployee::getSalary()
{
   return salary+bonus;
}
    void ManagerEmployee::getDetails()
    {
        SalariedEmployee::getDetails();

        cout<<"Enter the bouns : ";  cin>>bonus;
    }

ManagerEmployee::~ManagerEmployee()
{
    //dtor
}
