#include "cathedra.h"

    void cathedra::setHeadOfDepartmentSurname(string headOfDepartmentSurname) 
    {
        this->headOfDepartmentSurname = headOfDepartmentSurname;
    }

    void cathedra::setEmployeesAmount(int employeesAmount)
    {
        this->employeesAmount=employeesAmount;
    }
    void cathedra::setCathedraName(string cathedraName)
    {
        this->cathedraName=cathedraName;
    }
    string cathedra::getHeadOfDepartmentSurname()
    {
        return headOfDepartmentSurname;
    }
    string cathedra::getCathedraName()
    {
        return cathedraName;
    }
    int cathedra::getEmployeesAmount()
    {
        return employeesAmount;
    }

    void cathedra::CathedraInfo()
    {
        cout<<"Cathedra name: "<<cathedraName<<endl;
        cout<<"Head of Cathedra surname: "<<headOfDepartmentSurname<<endl;
        cout<<"Amount of employees: "<<employeesAmount<<endl<<endl;
    }
