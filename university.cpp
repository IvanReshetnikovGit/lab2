#include "university.h"    
    
    university::university(int amountOfInstitutions)
    {
        this->amountOfInstitutions = amountOfInstitutions;
        institutions = new institution[amountOfInstitutions];
        this->UniversityName="NLTU";
        this->rectorSurname="Zagorskiy";        
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
    int university::amountEmployees()
    {
        int amountT{};
        for (int i = 0; i < amountOfInstitutions; i++)
        {
            for (int j = 0; j < institutions[i].getAmountCathedras(); j++)
            {
              amountT+= institutions[i].Cathedras[j].getEmployeesAmount();
            }
        }
        cout<<"Total amount of employees: "<<amountT<<endl<<endl;
        
        return amountT;
    }

    void university::ACathedraInf()
    {
        int dataC{};
            for (int i = 0; i < amountOfInstitutions; i++)
            {
                cout<<i+1<<". Show Institution №"<<i+1<<" Cathedras data"<<endl;
            }
            cin>>dataC;
            dataC--;
            if (dataC>=0 && dataC<= amountOfInstitutions)
            {
                for (int i = 0; i < institutions[dataC].getAmountCathedras(); i++)
                {
                    institutions[dataC].Cathedras[i].CathedraInfo();
                }
            }
            else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
    }
   void university::AInstitutionInf()
   {
    int dataI;
        for (int i = 0; i < amountOfInstitutions; i++)
        {
            cout<<i+1<<". Show Institution №"<<i+1<<" data"<<endl;
        }
        cin>>dataI;
        cout<<endl;
        if(dataI<=amountOfInstitutions && dataI>=1)
        {
            institutions[dataI].institutionInfo(dataI);
        }
        else
        {
            cout<<"Next time enter correct option!"<<endl<<endl;
        }
   }

   void university::AUniversityInf()
   {
    cout<<"\nUniversity data:"<<endl;
    cout<<"University name: "<<UniversityName<<endl;
    cout<<"Rector surname: "<<rectorSurname<<endl;
    cout<<"Amount of Institutions: "<<amountOfInstitutions<<endl<<endl;
   }

    void university::EditInstitutions(bool usrStop)
    {
        int choiceI1,choiceI2;
            cout<<"0.exit"<<endl;
            for (int i = 0; i < amountOfInstitutions; i++)
            {
                cout<<i+1<<". Edit institution №"<<i+1<<endl;
            }
            cin>>choiceI1;
            choiceI1--;
            if(choiceI1+1 == 0)
            {
                usrStop=true;
            }
            cout<<"0.Exit"<<endl;
            cout<<"1.Change "<<choiceI1+1<<" director`s name"<<endl;
            cout<<"2.Change "<<choiceI1+1<<" Institution name"<<endl;
            cout<<"3.Change "<<choiceI1+1<<" Cathedras information"<<endl;
            cin>>choiceI2;
            if (choiceI2 == 1)
            {
                string surnameD;
                cout<<"Enter "<<choiceI1+1<<" Institutions director name:";
                cin>>surnameD;
                institutions[choiceI1].setDirectorsSurname(surnameD);
                cout<<"Institutions №"<<choiceI1+1<<" directors name was changed to "<<surnameD<<endl<<endl;;
            }
            else if(choiceI2 == 2)
            {
                string nameI;
                cout<<"Enter "<<choiceI1+1<<" Institutions director name:";
                cin>>nameI;
                institutions[choiceI1].setInstitutionName(nameI);
                cout<<"Institutions №"<<choiceI1+1<<"  name was changed to "<<nameI<<endl<<endl;;
            }
            else if(choiceI2 == 3)
            {
                int choiceC1,choiceC2;
                for (int i = 0; i < institutions[choiceI1].getAmountCathedras(); i++)
                {
                    cout<<i+1<<". Edit Cathedra №"<<i+1<<endl;
                }
                cin>>choiceC1;
                choiceC1--;
                if(choiceC1>=0 && choiceC1<=institutions[choiceI1].getAmountCathedras())
                {
                cout<<"0.Exit"<<endl;
                cout<<"1.Change "<<choiceC1<<" Cathedra head name"<<endl;
                cout<<"2.Change "<<choiceC1<<" Cathedra amount of employees"<<endl;
                cout<<"3.Change "<<choiceC1<<" Cathedra name"<<endl;
                cin>>choiceC2;
                cout<<endl;
                }
                else
                {
                    cout<<"Next time enter correct option!"<<endl<<endl;
                }

                if(choiceC2 == 0)
                {
                    
                }
                else if(choiceC2 == 1)
                {
                    string headName;
                    cout<<"Enter "<<choiceC1<<" Cathedra head name:";
                    cin>>headName;
                    institutions[choiceI1].Cathedras[choiceC1].setHeadOfDepartmentSurname(headName);
                    cout<<"Cathedra head name "<<choiceC1<<" Cathedra head name:"<<headName<<endl;
                    cout<<endl;
                }
                else if(choiceC2 == 2)
                {
                    int amount;
                    cout<<"Enter "<<choiceC1<<" Cathedra amount of employees: ";
                    cin>>amount;
                    institutions[choiceI1].Cathedras[choiceC1].setEmployeesAmount(amount);
                    cout<<"Amount of emplyees on Cathedra "<<choiceC1<<" was changed to "<<institutions[choiceI1].Cathedras[choiceC1].getEmployeesAmount()<<endl;
                    cout<<endl;
                }
                else if(choiceC2 == 3)
                {
                    string nameC;
                    cout<<"Enter "<<choiceC1<<" Cathedra name:";
                    cin>>nameC;
                    institutions[choiceI1].Cathedras[choiceC1].setCathedraName(nameC);
                    cout<<"Name of Cathedra "<<choiceC1<<"was changed to "<<nameC<<endl;
                    cout<<endl;
                }
                else
                {
                    cout<<"Next time enter correct option!"<<endl<<endl;
                }
                
            }
            else if(choiceI2 == 0)
            {
                usrStop=true;
            }
            else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
    }
    void university::EditUniversity()
    {
        string surname;
        cout<<"Enter rectors surname: ";
        cin>>surname;
        rectorSurname=surname;
        cout<<"rectors surname was changed to "<<surname<<endl<<endl;
    }