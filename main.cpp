#include<iostream>
#include<string>

using namespace std;

class cathedra
{
    string headOfDepartmentSurname;
    int employeesAmount;

    public:
    void setHeadOfDepartment(string headOfDepartmentSurname) 
    {
        this->headOfDepartmentSurname=headOfDepartmentSurname;
    }

    void setEmployeesAmount(int employeesAmount)
    {
        this->employeesAmount=employeesAmount;
    }
};

class institution
{
    private:
    string directorSurname;
    cathedra *Cathedras;
    int amountOfCathedras;
    public:
    institution()
    {
        setAmountOfCathedras();
        Cathedras = new cathedra[amountOfCathedras];
    }

    void setAmountOfCathedras()
    {
        cout<<"Enter amount of Cathedras in this institution: ";
        cin>>amountOfCathedras;
    }

    void setDirectorSurname(string directorSurname)
    {
        this->directorSurname=directorSurname;
    }

    ~institution()
    {
        delete[] Cathedras;
    }
};

class university
{
    int amountOfInstitutions;
    string rectorSurname;
    institution *institutions;
    
    public:
    
    university(int amountOfInstitutions)
    {
        this->amountOfInstitutions = amountOfInstitutions;
        institutions = new institution[amountOfInstitutions];
    }

    ~university()
    {
        delete[] institutions;
    }
};



int main()
{
    bool stop{false};
    int amountOfInstitutions{};

    cout<<"Enter amount of Institutions in youre university: ";
    cin>>amountOfInstitutions;

    university NLTU(amountOfInstitutions);

    return 0;
}