// Static Data Members & Methods in C++ OOPS | C++ Tutorials for Beginners #24
#include <iostream>
using namespace std;
class Employee
{
    int id;
   static int count ;
// int count =0;//this will not share the employee for indivisual rather it will start from beg for each employe like in this for harry ,rajesh and chandan.
public:
void setid()
{
    cout<<"enter your id "<<endl;
    cin>>id;
    count++;
}
void getid()
{
    cout<<"the id of the employe is "<<id<<"for the employee no "<<count<<endl;
}
static void getCount()
{
    cout<<"the count is "<<count<<endl;
}
};
int Employee::count=1000;//by default it will take value as zero at initial har object count ko share karenge agar hum aisa karte hai toh
int main()
{
    Employee harry,rajesh,chandan;
    harry.setid();
    harry.getid();
    rajesh.setid();
    rajesh.getid();

    chandan.setid();
    chandan.getid();
    Employee::getCount();


    return 0;
}

// #include<iostream>
// using namespace std;
// class Employee{
//     int id;
//   static int count;
//     public:
//     void setData(void){
//         cout<<"Enter the id "<<count+1<<endl;
//         cin>>id;
//         count++;
//     }
//     void getData(void)
//     {
//         cout<<"the id of the employee is  "<<id<< " and the employee number is "<<count<<endl;
//     }
//    static void getCount(void)
//     {
//         // cout<<"id" <<id<<endl;here throw here.
//         cout<<"the count is "<<count<<endl;
//     }
// };
// int Employee::count;//default value zero
// // int Employee::count=100;//default value zero
// int main(){
//     Employee Chandan,Chirag,Sneha;
//     Chandan.setData();
//     Chandan.getData();
//     Employee::getCount();
//     Chirag.setData();
//     Chirag.getData();
//     Employee::getCount();
//     Sneha.setData();
//     Sneha.getData();
//     Employee::getCount();

//     return 0;
// }