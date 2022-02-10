#include<iostream>
using namespace std;
class Number
{
    int a;
    public:
    Number(){
        a=0;
    }
    Number(int num)
    {
        a=num;

    }
    // When no copy constructor is found, compiler supplies its own copy constructor
    Number(Number &obj)
    {
        cout<<"copy constructor called "<<endl;
        a=obj.a;

    }

    void Print()
    {
        cout<<"the number is "<<a<<endl;
    }
};
int main(){
    Number x,y,z(45),z2;
   z.Print();
    y=Number();
    y.Print();
    Number z1(z);
    z1.Print();
    z2=z;// Copy constructor not called
    z2.Print();
Number z3=z;
z3.Print();
// z1 should exactly resemble z  or x or y
    return 0;
}