#include<iostream>
using namespace std;
class Complex
{
      int a ,b;
    public:
    
   Complex(int x ,int y)
   {
       a=x;
       b=y;
   }
    Complex(int x )
   {
       a=x;
       b=0;
   }
 Complex()
   {
       a=0;
       b=0;
   }
   void PrintC(void)
   {
      cout<<"the complex no is "<<a<< " + "<<b<<"i"<<endl;
   }
};
 
int main(){
    Complex c1(10,20);
    c1.PrintC();
    Complex c2(300);
    c2.PrintC();
    Complex c3;
    c3.PrintC();
    return 0;
}
