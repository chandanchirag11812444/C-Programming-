#include<iostream>
using namespace std;
// float avarg(int a ,int b)
// {
//     float avg =(a+b)/2.0;
//     return avg;
// }
// float avarg(int a ,float b)
// {
//     float avg=(a+b)/2.0;
//     return avg;
// }
template <class T1,class T2>
float avarg(T1 a,T2 b)
{
    float avg=(a+b)/2;
    return avg;
}
template <class T>
void swapp(T &a,T &b)
{
      T temp=a;
      a=b;
      b=temp;
}
int main(){
    float a;
    a=avarg(7,4.5);
    
    printf("the value of avg is %.2f\n",a);
    int x=1,y=5;
    swapp(x,y);
    cout<<x<<endl<<y<<endl;
    return 0;
}