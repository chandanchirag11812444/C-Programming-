#include <iostream>
using namespace std;
class C2;
class C1
{
    int data1;

    friend void exchangev(C1 &, C2 &);

public:
    void setdata(int a)
    {
        data1 = a;
    }
    void display()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class C2
{
    int data2;
    friend void exchangev(C1 &, C2 &);

public:
    void setdata(int b)
    {
        data2 = b;
    }
    void display()
    {
        cout << "the value data2 is " << data2 << endl;
    }
};
void exchangev(C1 &x1, C2 &y1)
{
    int temp = x1.data1;
    x1.data1 = y1.data2;
    y1.data2 = temp;
}
int main()
{
    C1 a1;
    a1.setdata(10);
    a1.display();
    C2 a2;
    a2.setdata(20);
    a2.display();
    exchangev(a1,a2);
    a1.display();
    a2.display();

    return 0;
}

// #include <iostream>
// using namespace std;
// class C2;
// class C1
// {
//     int x1;
//     friend void exchange(C1 & , C2 &);

// public:
//     void setData(int data)
//     {
//         x1 = data;
//     }
//     void display(void)
//     {
//         cout << "the value of x1 is " << x1 << endl;
//     }
// };
// class C2
// {
//     int y1;
//     friend void exchange(C1 &, C2 &);

// public:
//     void setData(int value)
//     {
//         y1 = value;
//     }
//     void display(void)
//     {
//         cout << "the value of y1 is " << y1 << endl;
//     }
// };
// void exchange(C1 & o1, C2 & o2)
// {
//     int temp = o1.x1;
//     o1.x1 = o2.y1;
//     o2.y1 = temp;
// }
// int main()
// {
//     C1 a1;
//     a1.setData(10);
//     a1.display();
//     C2 a2;
//     a2.setData(20);
//     a2.display();
//     exchange(a1,a2);
//     a1.display();
//     a2.display();

//     return 0;
// }