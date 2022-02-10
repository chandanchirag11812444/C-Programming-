#include<iostream>
using namespace std;
int fib(int n)
{
   if(n==1)
   {
       return 1;
   }
   else if(n==0)
   {
       return 0;
   }
   else{
       return fib(n-1)+fib(n-2);
       /*n=3  0 1 1 2 3 5 8 13 21  0 */
   }
}
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    int a=fib(n);
    cout<<a<<endl;
    return 0;
}



























// #include <iostream>
// using namespace std;
// int checkPrime(int P)
// {
//     if (P == 1 || P == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return P * checkPrime(P - 1);
//     }
// }
// int main()
// {
//     int n;
//     cout << "enter n" << endl;
//     cin >> n;
//     int a = checkPrime(n);
//     cout << a << endl;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// // int fac(int n)
// // {
// //     if(n==1 ||n==0)
// //     {
// //         return 1;
// //     }
// //     return n*fac(n-1);
// // }
// int fib(int n)
// {
//     if(n<2)
//     {
//         return 1;
//     }
//     return fib(n-2)+fib(n-1);
// }
// int main(){
//     int a;
//     cout<<"enter the value of a "<<endl;
//     cin>>a;
//     // int f=fac(a);
//     // cout<<"the value of fac is "<< f<<endl;
//     cout<<"the fib value of "<< a << " is "<< fib(a)<<endl;
//     return 0;
// }