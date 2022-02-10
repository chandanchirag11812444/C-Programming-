#include<iostream>
using namespace std;
class Simple
{
    int a,b;
    public:
    Simple(int x,int y=15)
    {
        a=x;
        b=y;

    }
   void printdata(void);
};
void Simple::printdata(void)
{
    cout<<"the value of a is "<<a<<" and b is "<<b<<endl;
}
int main(){
    Simple a2(10,70);
    a2.printdata();
    // Simple a1(10);
    // a1.printdata();
    return 0;
}