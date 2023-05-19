#include "SalariedEmployee.h"
#include "employee.h"

SalariedEmployee::SalariedEmployee(int s):Employee(s)
{
    //ctor
}
SalariedEmployee::SalariedEmployee(int s,double sal=200):Employee(s)
{
    salary=sal;
}

    double SalariedEmployee::getSalary()
    {
        return salary;
    }
    void SalariedEmployee::getDetails()
    {
        Employee::getData();
        cout<<"Enter the Salary : ";
        cin>>salary;
    }

SalariedEmployee::~SalariedEmployee()
{
    //dtor
}
