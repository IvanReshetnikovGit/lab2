#pragma once
#include "institution.h"
class university
{
    int amountOfInstitutions;
    std::string rectorSurname;
    

    public:
    institution *institutions;
    university(int amountOfInstitutions);
    ~university();
    void setRectorSurname(std::string rectorSurname);
    std::string getRectorSurname();
    int amountEmployees(university NLTU);
    void CathedraInfo(university NLTU,int dataC,int i);

};