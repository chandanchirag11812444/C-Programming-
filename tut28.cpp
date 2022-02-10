#include <iostream>//aapas main ek dusre ko friend bolkar maje karna or private data ko access karna
using namespace std;
class Y;
class X
{
    int data;

public:

    void setDATA(int val)
    {
        data=val;

    }
    friend void add(X,Y);
};
class Y
{
    int Nmber;

public:

    void setDATA(int valuee)
    {
      Nmber=valuee;

    }
    friend void add(X,Y);
};
void add(X o1,Y o2)
{
    cout<<"The sum obj of class  X and class Y data member is "<<o1.data+o2.Nmber<<endl;
}
int main()
{
    X obj1;
    obj1.setDATA(10);
    Y obj2;
    obj2.setDATA(20);
    add(obj1,obj2);
    return 0;
}

// #include <iostream>
// using namespace std;
// class Y;
// class X
// {
//     int data;

// public:
//     void setData(int value)
//     {
//         data = value;
//     }
//     friend void add(X, Y);
// };
// class Y
// {
//     int num;

// public:
//     void setData(int value)
//     {
//         num = value;
//     }
//     friend void add(X, Y);
// };
// void add(X o1, Y o2)

// {
//     cout << "the sum of object of class X and y is " << (o1.data + o2.num) << endl;
// }

// int main()
// {
//     X a1;
//     a1.setData(5);
//     Y a2;
//     a2.setData(10);
//     add(a1, a2);

//     return 0;
// }