#include <iostream>
#include <HRsystem.h>
#include <employee.h>
#include <HourlyEmployee.h>
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include "department.h"

using namespace std;

int it[100];
int hR[100];
int tot[100];
int pr[100];
int sales[100];

int c5,size1=0,size2=0,size3=0,size4=0,size5=0;

void chooseDepart(int id)
{
    cout<<"\n1:IT \n2:HR \n3:TOT \n4:PR \n5:SALES \nENTER SELECTION : ";
    cin>>c5;
    system("cls");
    switch(c5)
    {
    case 1:
        it[size1++]=id;
        break;
    case 2:
        hR[size2++]=id;
        break;
    case 3:
        tot[size3++]=id;
        break;
    case 4:
        pr[size4++]=id;
        break;
    case 5:
        sales[size5++]=id;
        break;
    default:
        cout<<"\nERORR";
    }
}

int main()
{

    int num=0;
    int c=1;
    Employee *emp1;
    system("cls");
    if(num==0)
    {
        cout<<"Enter the system size : ";
        cin>>num;
    }
    HRsystem hr(num);
    while(c!=0)
    {
        system("cls");
        cout<<"1:PRINT Department file \n2:Employees \n0:Exit \nYOUR CHOICE : ";
        cin>>c;
system("cls");
        switch(c)
        {
        case 1:
        {
            int c3=1;
            while(c3!=0)
            {
                cout<<"\n1:IT \n2:HR \n3:TOT \n4:PR \n5:SALES \nENTER SELECTION : ";
                cin>>c3;
                system("cls");
                switch(c3)
                {
                case 1:
                {
                    cout<<"\nIT DEPARTMENT ";
                    for(int i=0; i<size1; i++)
                    {
                        hr.FindEmployee(it[i]);
                        cout<<"\n____________________\n";
                    }
                }
                break;
                case 2:
                {
                    cout<<"\nHR DEPARTMENT ";
                    for(int i=0; i<size2; i++)
                    {
                        hr.FindEmployee(hR[i]);
                        cout<<"\n____________________\n";
                    }
                }

                break;
                case 3:
                {

                    cout<<"\nTOT DEPARTMENT ";
                    for(int i=0; i<size3; i++)
                    {
                        hr.FindEmployee(tot[i]);
                        cout<<"\n____________________\n";
                    }

                }
                break;
                case 4:
                {

                    cout<<"\nPR DEPARTMENT ";
                    for(int i=0; i<size4; i++)
                    {
                        hr.FindEmployee(pr[i]);
                        cout<<"\n____________________\n";
                    }

                }
                break;
                case 5:
                {

                    cout<<"\nSALES DEPARTMENT ";
                    for(int i=0; i<size5; i++)
                    {
                        hr.FindEmployee(it[i]);
                        cout<<"\n____________________\n";
                    }

                }
                break;
                default:
                    cout<<"\nERORR";
                }
            }
        }
        break;
        case 2:
        {

            int c2=1;
            while(c2!=0)
            {
                system("cls");
                cout<<"\n1:ADD \n2:EDIT \n3:DEL \n4:FIND \n5:SHOW ALL \n6:CALCPAYROLL \n7:Benefits \n8:Assgin to department \n0:RETURN \nSELECTION : ";
                cin>>c2;
                 system("cls");
                switch(c2)
                {
                case 1:
                {
                        system("cls");
                    hr.addEmployee();

                }
                break;
                case 2:
                {
                    hr.editEmployee();
                }
                break;
                case 3:
                {
                    hr.delEmployee();
                }
                break;
                case 4:
                {
                    hr.FindEmployee();
                }
                break;
                case 5:
                {
                    hr.ShowAll();
                    Sleep(50000);
                }
                break;
                case 6:
                {
                    hr.calcTotalPayroll();
                }
                break;
                case 7:
                {
                    hr.BenefitF();
                }
                break;
                case 8:
                {
//                    cout<<"Assin to Department : ";
//                    int dept_id=0;
//                    cout<<"Enter depart id : ";
//                    cin>>dept_id;
//                    int depart_ind;
//                    for(int i=0; i<num; i++)
//                    {
//                        if(depart[i].getID()==dept_id)
//                        {
//                            depart_ind=i-1;
//                            break;
//                        }
//                    }
//                    if(depart_ind==0)
//                    {
//                        cout<<"No department ";
//                        break;
//                    }
//                    else
//                    {
//                        int id1;
//                        cout<<"enter id";
//                        cin>>id1;
//                        bool assignemp=hr.assigntoemployee(id1,(depart+depart_ind));
//                        if(assignemp) cout<<"ADDED";
//
//                        else cout<<"EMPLOYEE ID NOT FOUND ";

                    //}
                    //  ----------------------------
                    Employee *m;
                    m=hr.FindEmployee();
                    if(m!=0)
                      chooseDepart(m->getID());

                }
                break;
                default:
                    cout<<"\nErorr!";
                }

            }

        }
        break;
        default :
            cout<<"ERORR";
        }
    }

    return 0;
}
