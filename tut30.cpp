#include<iostream>
using namespace std;
class Complex
{
      int a ,b;
    public:
    
   Complex(int ,int);
   void PrintC(void)
   {
      cout<<"the complex no is "<<a<< " + "<<b<<"i"<<endl;
   }
};
 Complex::Complex(int x,int y)//it can take parametrised constructor as it takes two arguments.
{
  a=x;
  b=y;
//   cout<<"hello world "<<endl;
}
int main(){
    // implicit call
   Complex a(4,7);
   a.PrintC();
//    explict call 
Complex b=Complex(15,25);
b.PrintC();
    return 0;
}
