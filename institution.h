#pragma once
#include "cathedra.h"
#include<iostream>
class institution
{
    private:
    string directorSurname;
    int amountOfCathedras;
    string institutionName;

    void setAmountOfCathedras();    

    public:
    cathedra *Cathedras;
    institution();
    ~institution();
    

    void setDirectorsSurname(string directorSurname);
    void setInstitutionName(string institutionsName);

    int getAmountCathedras();
    string getDirectorsSurname();
    string getInstitutionName();

    void institutionInfo(int dataI);

};