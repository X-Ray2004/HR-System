#include "HRsystem.h"
#include "HourlyEmployee.h"
#include "employee.h"
#include "CommissionEmployee.h"
#include "SalariedEmployee.h"
#include "ManagerEmployee.h"

int x=0;

HRsystem::HRsystem(int s=100)
{
    size4=s;
    EmployeeList = new Employee*[size4];
    C_employee=0;
}

void HRsystem::calcTotalPayroll()
{
    double salary;
    for (int y=0; y<C_employee; y++)
    {
        salary+=EmployeeList[y]->getSalary();
    }
    cout<<"\nTHE PAYROLL IS : "<<salary<<endl;
}

void HRsystem::addEmployee()
{
    int c2;
    cout<<"\nWhat is the kind of employee ? \n1:Hourly \n2:Manger \n3:Salaried \n4:Commission \nYour selection : ";
    cin>>c2;

    switch(c2)
    {
    case 1:
    {
    if (C_employee>=size4)
    {
        cout<< "\nERROR THERE IS NO SIZE !";
        return ;
    }

    EmployeeList[C_employee]= new HourlyEmployee(2) ;
    EmployeeList[C_employee++]->getDetails();
    }
    break;
    case 2:
    {
    if (C_employee>=size4)
    {
        cout<< "\nERROR THERE IS NO SIZE !";
        return ;
    }
    EmployeeList[C_employee]= new SalariedEmployee(2);
    EmployeeList[C_employee]= new ManagerEmployee(2) ;
    EmployeeList[C_employee++]->getDetails();
        }
        break;

         case 3:
    {
    if (C_employee>=size4)
    {
        cout<< "\nERROR THERE IS NO SIZE !";
        return ;
    }
    EmployeeList[C_employee]= new SalariedEmployee(2) ;
    EmployeeList[C_employee]->getDetails();
    C_employee++;
        }
        break;
         case 4:
    {
    if (C_employee>=size4)
    {
        cout<< "\nERROR THERE IS NO SIZE !";
        return ;
    }
    EmployeeList[C_employee]= new CommissionEmployee(2) ;
    EmployeeList[C_employee]->getDetails();
    C_employee++;
        }
        break;
         default :

        cout<<"Error ";
    }

}
void HRsystem::editEmployee()
{
    int num;
    Employee *emp;
    emp=FindEmployee();
    if(emp!=0)
    {
        emp->getDetails();
        EmployeeList[x]=emp;
    }
    else
    {
        cout<<"\nthere is no one !";
    }
}
void HRsystem::delEmployee()
{
    int num;
    Employee* emp;
    emp=FindEmployee();
    if(emp!=0)
    {
        delete EmployeeList[x];
        for(int i=0; i<C_employee-1; i++)
        {
            EmployeeList[i]=EmployeeList[i+1];
        }
        C_employee--;
    }
    else cout<<"\nthere is no one !";
}

    void HRsystem::FindEmployee(int id)
    {
    for( x=0; x<size4; x++)
    {
        if(EmployeeList[x]->getID()==id)
        {
            e1=EmployeeList[x];
            e1->displayDetails();
            break;
        }
    }
    }


Employee* HRsystem::FindEmployee()
{
    int n;
    cout<<"Enter the Id of the employee that you want : ";
    cin>>n;
    for( x=0; x<size4; x++)
    {
        if(EmployeeList[x]->getID()==n)
        {
            e1=EmployeeList[x];
            e1->displayDetails();
            break;
        }
        else {e1= 0;}
    }
    if (e1==0)
    {cout<<"\nTHERE IS NO ONE WITH THIS HERE!";}
    return e1;

}
void HRsystem::ShowAll()
{
        cout<<"\n--------------------------------------------\n";
    for(int x=0; x<C_employee; x++)
    {
        EmployeeList[x]->displayDetails();
        cout<<"\n--------------------------------------------\n";
    }
}

    void HRsystem::BenefitF()
    {
        int c6;
        cout<<"1:ADD \n2:SHOW \n3:Exit \nENTER SELECTION : ";
        cin>>c6;
        switch(c6)
        {
        case 1:
        {
            Employee* e2;
        e2=HRsystem::FindEmployee();
        e2->addBenifit();
        }
        break;
        case 2:
            {
                 Employee* e2;
        e2=HRsystem::FindEmployee();
        e2->showBenfits();
            }
            break;
        }
    }

HRsystem::~HRsystem()
{
    for(int i=0; i<C_employee; ++i)
        delete EmployeeList[i];
    delete []EmployeeList;
}
