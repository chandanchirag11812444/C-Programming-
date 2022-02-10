// /*Array of Objects & Passing Objects as Function Arguments in C++ | C++ Tutorials for Beginners #25*/

// #include <iostream>
// using namespace std;
// class Employee
// {
//     int id;
//     int salary;

// public:
//     void setid();
//     void getid();
// };
// void Employee::setid()
// {

//     cout << "Enter the id of the Employee " << endl;
//     cin >> id;
//     cout << "Enter the salary of the employee " << endl;
//     cin >> salary;
// }
// void Employee::getid()
// {
//     cout << "The id of the employee is " << id << "and salary is " << salary << endl;
// }
// int main()
// {
//     Employee fb[10];
//     for (int i = 0; i < 10; i++)
//     {
//         fb[i].setid();
//         fb[i].getid();
//     }
//     return 0;
// }
//& Passing Objects as Function Arguments in C++
#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
void setData1(int v1,int v2)
{
   a=v1;
   b=v2;
}
void setData2sum(Complex o1,Complex o2)
{
    a=o1.a+o2.a;
    b=o1.b+o2.b;
}
void showData()
{
    cout<<"the vector sum is "<<a<<"+"<<b<<"i"<<endl;
}
};
int main()
{
Complex a1,b1,c1;
a1.setData1(1,11);
a1.showData();
b1.setData1(2,12);
b1.showData();
c1.setData2sum(a1,b1);
c1.showData();
    return 0;
}