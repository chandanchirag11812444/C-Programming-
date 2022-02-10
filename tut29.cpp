#include<iostream>
using namespace std;
class Complex
{
      int a ,b;
    public:
    // defining constructor 
    // constructor is a special type of member function.
    // it inovoked automatically
    // it has same name of class
   Complex(void);
   void PrintC(void)
   {
      cout<<"the complex no is "<<a<< " + "<<b<<"i"<<endl;
   }
};
 Complex::Complex(void)
{
  a=10;
  b=20;
}
int main(){
    Complex o1;
    o1.PrintC();
    return 0;
}