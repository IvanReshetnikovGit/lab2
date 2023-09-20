#pragma once
#include "cathedra.h"
#include<iostream>
class institution
{
    private:
    std::string directorSurname;
    int amountOfCathedras;
    std::string institutionName;

    void setAmountOfCathedras();    

    public:
    cathedra *Cathedras;
    institution();
    ~institution();
    void setDirectorsSurname(std::string directorSurname);
    void setInstitutionName(std::string institutionsName);
    int getAmountCathedras();
    std::string getDirectorsSurname();
    std::string getInstitutionName();
};