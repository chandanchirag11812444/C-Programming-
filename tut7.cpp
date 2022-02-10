#include<iostream>
using namespace std;
int c=500;
int main()
{
                              // ******built in data types**********

    // int a;
    // int b;
    // cout<<"the value of a is "<<endl;
    // cin>>a;
    // cout<<"the value of b is "<<endl;
    // cin>>b;
    // int c=a+b;
    // cout<<"the sum is "<<c<<endl;
    // cout<<::c<<endl;//"::" this called scope resolution operator it can take values from global 

    //                         float ,double and long double litrals ********
    // float d=45.4F;
    // long double e=45.4;

    // cout<<"the size of 45.4 is "<<sizeof(45.4)<<endl;
    // cout<<"the size of 45.4f is "<<sizeof(45.4f)<<endl;
    // cout<<"the size of 45.4F is "<<sizeof(45.4F)<<endl;
    // cout<<"the size of 45.4L is "<<sizeof(45.4L)<<endl;
    // cout<<"the size of 45.4l is "<<sizeof(45.4l)<<endl;
    // cout<<"the value of d is "<<d<<endl<<"The value of e is "<<e<<endl;


    //  ********************    REFERENCE VARIABLE                     ************
   //chandan||chandu||chirag or any name meaning same the thing is it is called by different names somewhere at diff places  


    //  int x=254;
    //  int &y=x;
    //  cout<<x<<endl;
    //  cout<<y<<endl;

      //  ********************    TYPE CASTING                    ************
     int a = 45;   
    float b = 45.46;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of a is "<<float(a)<<endl;

    cout<<"The value of b is "<<(int)b<<endl;
    cout<<"The value of b is "<<int(b)<<endl;
    int c = int(b);

    cout<<"The expression is "<<a + b<<endl;
    cout<<"The expression is "<<a + int(b)<<endl;
    cout<<"The expression is "<<a + (int)b<<endl;


    return 0;
}
