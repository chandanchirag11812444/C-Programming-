#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    // const int a=45;
    // cout<<"the value of a is "<<a<<endl;
    // // a=78;
    // cout<<"the value of a fetr "<<a<<endl;
    // // constant in c++
    // // manipulator in c++
    int a=2,b=30,c=500;
    // cout<<"the value of a is "<<a<<endl;
    // cout<<"the value of b is "<<b<<endl;
    // cout<<"the value of c is "<<c<<endl;

    cout<<"the value of a is "<<setw(3)<<a<<endl;
    cout<<"the value of b is "<<setw(3)<<b<<endl;
    cout<<"the value of c is "<<setw(3)<<c<<endl;
    // Operator Precedence
    // int a =3, b=4;
    // // int c = (a*5)+b;
    // int c = ((((a*5)+b)-45)+87);
    // cout<<c;
 
    return 0;
}
