#pragma once
#include<string>
#include<iostream>
using namespace std;
class cathedra
{
    std::string headOfDepartmentSurname;
    int employeesAmount;
    std::string cathedraName;

    public:
    void setHeadOfDepartmentSurname(std::string headOfDepartmentSurname);
    void setEmployeesAmount(int employeesAmount);
    void setCathedraName(std::string cathedraName);
    std::string getHeadOfDepartmentSurname();
    std::string getCathedraName();
    int getEmployeesAmount();

    
};