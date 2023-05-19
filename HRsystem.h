#ifndef HRSYSTEM_H
#define HRSYSTEM_H
#include "employee.h"
#include "SalariedEmployee.h"
#include "HourlyEmployee.h"
#include "ManagerEmployee.h"
#include "CommissionEmployee.h"

class HRsystem
{
private:

    Employee** EmployeeList;
    int C_employee;
    Employee * e1;
    int size4;



public:
    void calcTotalPayroll();
    void addEmployee();
    void editEmployee();
    void delEmployee();
    Employee* FindEmployee();
    void FindEmployee(int id);

    void ShowAll();
    void BenefitF();


    HRsystem(int s);
    virtual ~HRsystem();
};

#endif // HRSYSTEM_H
