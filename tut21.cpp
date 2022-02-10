#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
   void  setData(int a1,int b1,int c1);//declartion
   void getData()
   {
         cout<<"the value of a is "<<a<<endl;
         cout<<"the value of b is "<<b<<endl;
         cout<<"the value of c is "<<c<<endl;
         cout<<"the value of d is "<<d<<endl;
         cout<<"the value of e is "<<e<<endl;

   }
};
void Employee::setData(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    Employee chandan;
    //chandan.a=10;directly cannot acesssible private varaible;
    chandan.d=10;
    chandan.e=20;
    chandan.setData(1,2,3);
    chandan.getData();
    return 0;
}
// class Student{
//     private:
//         int roll;
//     public:
//         string name;
//         int Class;
//         void setData(int r);// declared
//         void getData(){

//             cout<<"The name of the student is "<<name<<endl;
//             cout<<"The class of the student is "<<Class<<endl;
//             cout<<"The roll no. of the student is "<<roll<<endl;
//         }
// };
// void Student :: setData(int r){
//     roll = r;
// }
// int main(){
//     Student nikhil;
//     nikhil.name = "Nikhil";
//     nikhil.Class = 7;
//     nikhil.setData(20);
//     nikhil.getData();

//     return 0;
// }