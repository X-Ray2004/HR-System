#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee(int s):Employee(s)
{
}

    double CommissionEmployee::getSalary()
    {
        return rate*target;
    }

    void CommissionEmployee::getDetails()
    {
    Employee::getData();
    cout<<"Enter the target : ";
    cin>>target;
    cout<<"\nEnter the rate : ";
    cin>>rate;
    }

    void CommissionEmployee::displayDetails()
    {
        Employee::displayDetails();
        cout<<"The Target is : "<<target;
        cout<<"The salary is : "<<getSalary();
    }

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}
