#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <iostream>
#include <string>

using namespace std;


class department
{
private:
    int departID;
    string departName;

public:
    void Print();
    void read();
    string getName();
    string PrinT();
    unsigned int getID();
    department();
    department(int ,string);

    virtual ~department();

protected:

private:
};

#endif // DEPARTMENT_H

