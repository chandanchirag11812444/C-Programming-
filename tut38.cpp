#include <iostream>
using namespace std;
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base::setdata()
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}

class derived : public base
{
    int data3;

public:
    int process();
    void display();
};
int derived::process()
{
    return data3 = data2 * getdata1();
}
void derived::display()
{
    cout << "the value of data1 is " << getdata1() << endl;
    cout << "the value of data2 is " << data2 << endl;
    cout << "the value of data3 is " << data3 << endl;
}
int main()
{
     derived a;
     a.setdata();
     a.process();
     a.display();
    return 0;
}