#include "university.h"    
    
    university::university(int amountOfInstitutions)
    {
        this->amountOfInstitutions = amountOfInstitutions;
        institutions = new institution[amountOfInstitutions];
    }
        
    university::~university()
    {
        delete[] institutions;
    }

    void university::setRectorSurname(std::string rectorSurname)
    {
        this->rectorSurname = rectorSurname;
    }
    
    std::string university::getRectorSurname()
    {
        return rectorSurname;
    }
    int university::amountEmployees(university NLTU)
    {
        int amountT{};
        for (int i = 0; i < amountOfInstitutions; i++)
        {
            for (int j = 0; j < NLTU.institutions[i].getAmountCathedras(); j++)
            {
              amountT+=NLTU.institutions[i].Cathedras[j].getEmployeesAmount();
            }
        }
        cout<<"Total amount of employees: "<<amountT<<endl<<endl;
        
        return amountT;
    }

    void university::CathedraInfo(university NLTU,int dataC,int i)
    {
        cout<<"Cathedra name: "<<NLTU.institutions[dataC].Cathedras[i].getCathedraName()<<endl;
        cout<<"Head of Cathedra surname: "<<NLTU.institutions[dataC].Cathedras[i].getHeadOfDepartmentSurname()<<endl;
        cout<<"Amount of employees: "<<NLTU.institutions[dataC].Cathedras[i].getEmployeesAmount()<<endl<<endl;
    }
