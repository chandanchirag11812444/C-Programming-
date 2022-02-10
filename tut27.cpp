// #include <iostream>
// using namespace std;
// class Complex; /// forward decleration

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }
//     int sumRealcomplex(Complex, Complex); // declartion prototyping
//     int sumcompcomplex(Complex, Complex);
// };

// class Complex
// {
//     int a;
//     int b;
//     //    indivually declarying friend function
//     // friend dtype classnjisko friend banana chahte ho ::functionname(object as function pehle class ka naam likh do)
//     // friend int Calculator ::sumRealcomplex(Complex,Complex);
//     // friend int Calculator ::sumcompcomplex(Complex,Complex);
//     // aliter :declarying the entire calulator as a friend
//     friend class Calculator;//Complex class bol rha hai ki calcular class  mera dosth hai voh mera private data member ko acess kar sakta hai ji.

// public:
//     void setcomplexN(int x, int y)
//     {
//         a = x;
//         b = y;
//     }
//     void PrintC()
//     {
//         cout << "the complex number is " << a << " + " << b << "i" << endl;
//     }
// };
// int Calculator::sumRealcomplex(Complex o1, Complex o2) // defining
// {
//     return (o1.a + o2.a);
// }
// int Calculator::sumcompcomplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }
// int main()
// {
//     Complex o1, o2;
//     o1.setcomplexN(1, 2);
//     o1.PrintC();
//     o2.setcomplexN(3, 4);
//     o2.PrintC();
//     Calculator calc;
//     int res = calc.sumRealcomplex(o1, o2);
//     cout << "rge sum of real part is " << res << endl;
//     int res2 = calc.sumcompcomplex(o1, o2);
//     cout << "rge sum of complex part is " << res2 << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

class complex; // yahi batate hai ki aage complex class hai koi niche
class Calculator
{

    public:
    int sumC(int a, int b)
    {
        return (a + b);
    }
    int sumReal(complex, complex);
    int sumImag(complex, complex); // here defining
};
class complex
{
    int a;
    int b;
    // invidually declaring friend function for each functionns name
    //    friend int Calculator::sumReal(complex,complex);
    //    friend int Calculator::sumImag(complex,complex);
    friend Calculator;
    public:
    void setComplex(int x, int y)
    {
        a = x;
        b = y;
    }
    void printc()
    {
        cout << "The complex  number is " << a << " + " << b << " i " << endl;
    }
};
int Calculator::sumReal(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int Calculator::sumImag(complex o1, complex o2)
{
    return (o1.b + o2.b);
}
int main()
{
    complex c1, c2;
    c1.setComplex(10, 20);
    c1.printc();
    c2.setComplex(20, 50);
    c2.printc();
    Calculator calc,cali;
    int res=calc.sumReal(c1,c2);
    cout<<"The real part sum is "<<res<<endl;
    int resi=cali.sumImag(c1,c2);
    cout<<"The imaginary part of sum is "<<resi<<"i "<<endl;

    return 0;
}