// // Friend Functions in C++ | C++ Tutorials for Beginners #26

#include <iostream>
using namespace std;
class Complex
{
    int a;
    int b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
   friend Complex sumComplex(Complex o1,Complex o2);//he is saying here that sumcomplex you are my friend okay you can have access of our private member.
void print();
   
};
Complex sumComplex(Complex o1,Complex o2)
{
    Complex o3;
     o3.setData((o1.a+o2.a),(o1.b+o2.b));
     return o3;
}

void Complex::print()
{
    cout<<"the complex form is "<<a<<" + "<<b<<" i "<<endl;

}
int main()
{
   Complex c1,c2,c3;
   c1.setData(12,50);
  c1.print();
  c2.setData(10,60);
  c2.print();
  c3=sumComplex(c1,c2);
  c3.print();

    return 0;
}

// #include<iostream>
// using namespace std;
// class Complex
// { int a;
// int b;
// public:
// void setcomplexN(int x,int y)
// {
//     a=x;
//     b=y;
// }
// void PrintC()
// {
//     cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
// }
//     friend Complex sumComplex(Complex o1,Complex o2);//passing objects as function arguments in c++

// };
// Complex sumComplex(Complex o1,Complex o2)
// {
//     Complex o3;
//     o3.setcomplexN((o1.a+o2.a),(o1.b+o2.b));
//     return o3;
// }

// int main(){
//     Complex c1,c2,c3;
//     c1.setcomplexN(1,2);
//     c1.PrintC();
//     c2.setcomplexN(2,3);
//     c2.PrintC();
//     c3=sumComplex(c1,c2);
//     c3.PrintC();
//     return 0;
// }