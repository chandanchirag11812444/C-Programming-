#include<iostream>
using namespace std;
class Complex{
    int a;
    int b;
    public:
    void setdata(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void sumcomplex(Complex c1,Complex c2)
    {
        a=c1.a+c2.a;
        b=c1.b+c2.b;
    }
    void pSum()
    {
        cout<<"your complext number is "<<a<< "+"<< b<<"i"<<endl;
    }
};
int main(){
    Complex co1,co2,co3;
    co1.setdata(1,2);
    co1.pSum();
    co2.setdata(3,4);
    co2.pSum();
    co3.sumcomplex(co1,co2);
    co3.pSum();
    
    return 0;
}