#include "institution.h"

    institution::institution()
    {
        setAmountOfCathedras();
        Cathedras = new cathedra[amountOfCathedras];
    }

    void institution::setAmountOfCathedras()
    {
        std::cout<<"Enter amount of Cathedras in this institution: ";
        std::cin>>amountOfCathedras;
    }

    void institution::setDirectorsSurname(std::string directorSurname)
    {
        this->directorSurname=directorSurname;
    }
    
    void institution::setInstitutionName(std::string institutionsName)
    {
        this->institutionName = institutionsName;
    }
    int institution::getAmountCathedras()
    {
        return amountOfCathedras;
    }
    std::string institution::getDirectorsSurname()
    {
        return directorSurname;
    }
    std::string institution::getInstitutionName()
    {
        return institutionName;
    }


    institution::~institution()
    {
        delete[] Cathedras;
    }
