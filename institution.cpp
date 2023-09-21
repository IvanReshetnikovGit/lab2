#include "institution.h"

    institution::institution()
    {
        setAmountOfCathedras();
        Cathedras = new cathedra[amountOfCathedras];
    }

    void institution::setAmountOfCathedras()
    {
        cout<<"Enter name of institution: ";
        cin>>institutionName;
        cout<<"Enter amount of Cathedras in this institution: ";
        cin>>amountOfCathedras;
        cout<<"Enter director surname: ";
        cin>>directorSurname;
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

     void institution::institutionInfo( int dataI)
    {
        cout<<"Institution №"<<dataI<<" information:"<<endl;
        cout<<"Institution name: "<<institutionName<<endl;
        cout<<"Amount of Cathedras: "<<amountOfCathedras<<endl;
        cout<<"Directors surname: "<<directorSurname<<endl<<endl;
    }

    
