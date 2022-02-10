#include<iostream>
using namespace std;
 int glow=5;//global variable
 void fun()
{
    int a;
    cout<<glow;
}
int main()
{

    // int a=4,b=6;
    // float c=3.14;
    int glow =9;//now it will print 9 cause local variable takes more precedence than global;
    glow=45;
    // char d='s';
    bool is=false;//bool true or false if true then 1 else 0;
     fun();
    cout<<glow<<" " <<is;
   
//     cout<<"the value of a is \n"<< a <<"  the value of b is\n " <<b<<" the value of flaot is\n "<<c;//\n line break
//   cout<<"\n the value of d is "<<d<<endl;
    return 0;
}