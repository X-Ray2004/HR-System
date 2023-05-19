#include "department.h"

department::department()
{
departID=0;
departName="";
}

    department::department(int id,string name)
    {
        departID=id;
        departName=name;
    }


void department::read()
{
    cout<<"Enter ID :";
    cin>>departID;
    cout<<"Enter Name : ";
    cin>>departName;
}

unsigned int department::getID(){return departID;}


void department::Print()
{
    cout<<"ID : "<<departID;
    cout<<"NAME : "<<departName;
}

    string department::getName()
    {
        return departName;
    }


string department::PrinT()
{
   return "ID : " + to_string(departID) + "NAME : " + departName;
}

department::~department()
{
    //dtor
}
