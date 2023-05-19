#include "HourlyEmployee.h"
#include "employee.h"

HourlyEmployee::HourlyEmployee(int s):Employee(s)
{
}

void HourlyEmployee::addHours(int moreHours=0)
{
    hoursWorked+=moreHours;
}


    double HourlyEmployee::getSalary()
    {
        return rate*hoursWorked;
    }

    void HourlyEmployee::getDetails()
    {
      Employee::getData();
      cout<<"Enter the Rate : ";
      cin>>rate;
       cout<<"Enter the HourWork : ";
      cin>>hoursWorked;
    }

     void HourlyEmployee::displayDetails()
     {
         Employee::displayDetails();
         cout<<"The rate is : "<<getSalary()<<"in "<<hoursWorked<<" Hour"<<endl;

     }


HourlyEmployee::~HourlyEmployee()
{
    //dtor
}
