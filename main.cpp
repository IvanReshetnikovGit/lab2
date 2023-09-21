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
            NLTU.EditUniversity();
        }
        if(choice == 2)
        {
            NLTU.EditInstitutions(usrStop);            
        }
        else if(choice == 3)
        {
            NLTU.AUniversityInf();
        }
        else if(choice == 4)
        {
            NLTU.AInstitutionInf();
        }
        else if(choice == 5)
        {
            NLTU.ACathedraInf();        
        }
        else if(choice == 6)
        {
            NLTU.amountEmployees();
        }
        else
            {
                cout<<"Next time enter correct option!"<<endl<<endl;
            }
    }
    return 0;
}