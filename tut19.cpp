#include <iostream>
using namespace std;
int sum(int a, int b)
{
    cout << " using two arguments " << endl;
    return a + b;
}
int sum(float a, int b, int c)
{
    cout << " using 3 arguments " << endl;
    return a + b + c;
}
// volume of cylinder
int volume (float r,int h)
{
    return 3.14*r*r*h;
}
// volume of cube 
int volume (float r)
{
    return r*r*r;
}
// volume of rectungalur box
int volume (int l,int b,int h)
{
    return l*b*h;
}
int main()
{
    cout << "the sum of 2 and 3 is " << sum(2, 3) << endl;
    cout << "the sum of 2 and 3  and 5  " << sum(2, 3, 5) << endl;
    cout<<"the volume of cylinder is "<< volume(2,10)<<endl;
    cout<<"the volume of cube is "<< volume(10)<<endl;
    cout<<"the volume of rectangular box  is "<< volume(2,10,10)<<endl;
    return 0;
}