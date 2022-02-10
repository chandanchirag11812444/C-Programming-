#include <iostream>
using namespace std;
class BankDeposit
{
    int Principal;
    int year;
    float InterestRate;
    float ReturnValue;

public:
    BankDeposit();
    BankDeposit(int p, int y, float r);
    BankDeposit(int p, int y, int r);
    void show();
};

BankDeposit::BankDeposit(int p, int y, float r)
{
    Principal = p;
    year = y;
    InterestRate = r;
    ReturnValue = Principal;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}
BankDeposit::BankDeposit(int p, int y, int r)
{

    Principal = p;
    year = y;
    InterestRate = float(r) / 100;
    ReturnValue = Principal;

    for (int i = 0; i < y; i++)

    {
        ReturnValue = ReturnValue * (1 + InterestRate);
    }
}

void BankDeposit::show()
{
    cout << "the money you have deposited is " << Principal << " and the for the year " << year << " after you will return back is " << ReturnValue << " with interestrate of " << InterestRate << endl;
}
int main()
{
    
    int p;
    int y;
    float r;
    int R;

    cout << "enter the principal" << endl;
    cin >> p;
    cout << "enter the year" << endl;
    cin >> y;
    cout << "enter the rate" << endl;
    cin >> r;
    BankDeposit a = BankDeposit(p, y, r);
    a.show();
    cout << "enter the principal" << endl;
    cin >> p;
    cout << "enter the year" << endl;
    cin >> y;
    cout << "enter the rate" << endl;
    cin >> R;
    BankDeposit b = BankDeposit(p, y, R);
    b.show();
    return 0;
}