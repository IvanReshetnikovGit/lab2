#include "university.h"
using namespace std;

int main()
{
    int amountOfInstitutions{};
    bool usrStop{false};
    int choice;
    cout<<"Enter amount of Institutions in youre university: ";
    cin>>amountOfInstitutions;
    cout<<endl;
    university NLTU(amountOfInstitutions);
    while(usrStop == false)
    {
        cout<<"0. Exit"<<endl;
        cout<<"1. Edit University"<<endl;
        cout<<"2. Edit institutions"<<endl;
        cout<<"3. Show university data"<<endl;
        cout<<"4. Show institutions data"<<endl;
        cout<<"5. Show cathedras data"<<endl;
        cout<<"6. Total amount of employees"<<endl;
        cin>>choice;
        cout<<endl;
        if(choice == 0)
        {
            usrStop = true;
        }
        if (choice == 1)
        {
            string surname;
            cout<<"Enter rectors surname: ";
            cin>>surname;
            NLTU.setRectorSurname(surname);
            cout<<"rectors surname was changed to "<<surname<<endl<<endl;
        }
        if(choice == 2)
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
                break;
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
                NLTU.institutions[choiceI1].setDirectorsSurname(surnameD);
                cout<<"Institutions №"<<choiceI1+1<<" directors name was changed to "<<surnameD<<endl<<endl;;
            }
            else if(choiceI2 == 2)
            {
                string nameI;
                cout<<"Enter "<<choiceI1+1<<" Institutions director name:";
                cin>>nameI;
                NLTU.institutions[choiceI1].setInstitutionName(nameI);
                cout<<"Institutions №"<<choiceI1+1<<"  name was changed to "<<nameI<<endl<<endl;;
            }
            else if(choiceI2 == 3)
            {
                int choiceC1,choiceC2;
                for (int i = 0; i < NLTU.institutions[choiceI1].getAmountCathedras(); i++)
                {
                    cout<<i+1<<". Edit Cathedra №"<<i+1<<endl;
                }
                cin>>choiceC1;
                choiceC1--;
                if(choiceC1>=0 && choiceC1<=NLTU.institutions[choiceI1].getAmountCathedras())
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
                    NLTU.institutions[choiceI1].Cathedras[choiceC1].setHeadOfDepartmentSurname(headName);
                    cout<<"Cathedra head name "<<choiceC1<<" Cathedra head name:"<<headName<<endl;
                    cout<<endl;
                }
                else if(choiceC2 == 2)
                {
                    int amount;
                    cout<<"Enter "<<choiceC1<<" Cathedra amount of employees: ";
                    cin>>amount;
                    NLTU.institutions[choiceI1].Cathedras[choiceC1].setEmployeesAmount(amount);
                    cout<<"Amount of emplyees on Cathedra "<<choiceC1<<" was changed to "<<NLTU.institutions[choiceI1].Cathedras[choiceC1].getEmployeesAmount()<<endl;
                    cout<<endl;
                }
                else if(choiceC2 == 3)
                {
                    string nameC;
                    cout<<"Enter "<<choiceC1<<" Cathedra name:";
                    cin>>nameC;
                    NLTU.institutions[choiceI1].Cathedras[choiceC1].setCathedraName(nameC);
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
                break;
            }
            else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
            
        }
        else if(choice == 3)
        {
            cout<<"\nUniversity data:"<<endl;
            cout<<"Rector surname: "<<NLTU.getRectorSurname()<<endl;
            cout<<"Amount of Institutions: "<<amountOfInstitutions<<endl<<endl;
        }
        else if(choice == 4)
        {
            int dataI;
            for (int i = 0; i < amountOfInstitutions; i++)
            {
                cout<<i+1<<". Show Institution №"<<i+1<<" data"<<endl;
            }
            cin>>dataI;
            if(dataI<=amountOfInstitutions && dataI>=1)
            {
            cout<<"Institution №"<<dataI<<" information:"<<endl;
            cout<<"Institution name: "<<NLTU.institutions[dataI].getInstitutionName()<<endl;
            cout<<"Amount of Cathedras: "<<NLTU.institutions[dataI].getAmountCathedras()<<endl;
            cout<<"Directors surname: "<<NLTU.institutions[dataI].getDirectorsSurname()<<endl;
            }
            else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
            
        }
        else if(choice == 5)
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
                for (int i = 0; i < NLTU.institutions[dataC].getAmountCathedras(); i++)
                {
                    NLTU.CathedraInfo(NLTU,dataC,i);
                }
            }
            else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
        
        }
        else if(choice == 6)
        {
            NLTU.amountEmployees(NLTU);        
        }
        else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
    }
    return 0;
}