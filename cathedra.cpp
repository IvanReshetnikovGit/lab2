#include "cathedra.h"

    void cathedra::setHeadOfDepartmentSurname(std::string headOfDepartmentSurname) 
    {
        this->headOfDepartmentSurname = headOfDepartmentSurname;
    }

    void cathedra::setEmployeesAmount(int employeesAmount)
    {
        this->employeesAmount=employeesAmount;
    }
    void cathedra::setCathedraName(std::string cathedraName)
    {
        this->cathedraName=cathedraName;
    }
    std::string cathedra::getHeadOfDepartmentSurname()
    {
        return headOfDepartmentSurname;
    }
    std::string cathedra::getCathedraName()
    {
        return cathedraName;
    }
    int cathedra::getEmployeesAmount()
    {
        return employeesAmount;
    }

   

