#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int iid)
    {
        id = iid;
        salary = 100;
    }
    Employee()
    {
    }
    void getdata(void)
    {
        cout<<"id is "<<id<<endl;
    }
};
class Programmer:public Employee
{
    public:
    int languagecode;
    Programmer(int inpid)
    {
        id=inpid;
        languagecode=20;
    }

};
int main()
{Employee chandan(1),rajesh(2);
cout<<chandan.salary<<endl;
cout<<rajesh.salary<<endl;
cout<<chandan.id<<endl;
cout<<rajesh.id<<endl;
Programmer skillF(10);
cout<<skillF.languagecode<<endl;
cout<<skillF.id<<endl;
    return 0;
}