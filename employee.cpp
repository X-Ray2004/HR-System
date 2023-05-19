#include "Employee.h"

Employee::Employee(int s2=10)
{
     // benefitList = new Benefit[s2];
       cBenefit=0;
       m_department=0;
}

void Employee::displayDetails()
{
    cout<<"\nthe ID : "<<ID<<endl;
    cout<<"the name : "<<name<<endl;
    cout<<"the phone : "<<phone<<endl;
    cout<<"the email : "<<email<<endl;
    cout<<"the jobTitle : "<<jobTitle<<endl;
    Employee::calculatePay();

}
    double Employee::calculatePay()
    {
        double pay=getSalary();
        double sal;

        for(int i=0;i<2;i++)
        {
            if(benefitList[i].flag()==true)
            {
                sal=(pay-benefitList[i].calculateBenefit());
            }
            else if (benefitList[i].flag()==false)
            {
               sal=(pay-benefitList[i].calculateBenefit());
            }
        }
        cout<<"The salary is : "<<sal;
      return pay;
    }
    void Employee::getData()
    {
        cout<<"Enter the ID : "; cin>>ID;
        cout<<"Enter the NAME : "; cin>>name;
        cout<<"Enter the phone : "; cin>>phone;
        cout<<"Enter the email : "; cin>>email;
        cout<<"Enter the jobTitle : "; cin>>jobTitle;
    }

int Employee::getID()
{
    return ID;
}

    void Employee::addBenifit()
    {
        int c3=1;
        cout<<"1:HEALTH \n2:DENTAL \nEnter selection :";
        cin>>c3;
        Benefit* b1;
        if(c3==1)
            {   b1= new HealthBenefit();
                b1->getDAta();
               // benefitList[0]= b1;
               }
            else if(c3==2)
            {b1 = new DentalBenefit();
             b1->getDAta();
            // benefitList[1]=b1;
             }
    }

    void Employee::showBenfits()
    {
        if(benefitList[1].flag())
            benefitList[1].displayBenefit();
        else
            benefitList[2].displayBenefit();
    }


Employee::~Employee()
{
    //dtor
}
