#pragma once
#include "institution.h"
class university
{
    int amountOfInstitutions;
    string rectorSurname;
    string UniversityName;
    

    public:
    institution *institutions;
    university(int amountOfInstitutions);
    ~university();

    void setRectorSurname(std::string rectorSurname);
    string getRectorSurname();

    int amountEmployees();

    void ACathedraInf();
    void AInstitutionInf();
    void AUniversityInf();

    void EditInstitutions(bool usrStop);
    void EditUniversity();
};