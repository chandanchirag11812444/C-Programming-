#include<iostream>
using namespace std;
class base1
{
protected:
int intv1;
public:
void setdata1(int a)
{
    intv1=a;

}

};
class base2
{
protected:
int intv2;
public:
void setdata2(int b)
{
    intv2=b;

}
};
class dervied:public base1,public base2{
    
public:
void show()
{
    cout<<"the value of intv1 is "<<intv1<<endl;
    cout<<"the value of intv1 is "<<intv1<<endl;
    cout<<"the value of intv1 is "<<intv1+intv2<<endl;
}

};
int main(){
    dervied chandan;
    chandan.setdata1(10);
    chandan.setdata2(20);
    chandan.show();
    return 0;
}