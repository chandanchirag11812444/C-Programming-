#include <iostream>
using namespace std;
class student
{
protected:
    int rollnumber;

public:
    void setrollno(int);
    void getrollno(void);
};
void student::setrollno(int r)
{
    rollnumber = r;
}
void student::getrollno(void)
{
    cout << "the roll of the student is " << rollnumber << endl;
}
class marks : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float, float);
    void getmarks(void);
};
void marks::setmarks(float m, float p)
{
    maths = m;
    physics = p;
}
void marks::getmarks(void)
{
    cout << "the marks obtained in maths  is  " <<maths<< endl;
    cout<<"the marks obtained in physics is "<<physics<<endl;
}
class result : public marks
{
protected:
    float percentage;

public:
    
    void displayr(void)
    {
       getrollno();
       getmarks();
       cout<<"the percentage obtained by the student is "<<(maths+physics)/2<<" % "<<endl;
    }
};

int main()
{ result a;
a.setrollno(12);
a.setmarks(95.2,90.5);
a.displayr();

    return 0;
}