#include <iostream>
using namespace std;

int product(int a, int b)
{
    /*for time saving we use inline function like in this scenerio product(a,b) function will take actual value from this and copy to formal parameter it then int product(int a,int b function will return a*b  at very fast it will return the value and saves a memory but we dont use inline function then it will call line by line every cout which we wanted to print like the same way everytime it will goes to fuction definition and returns a*b everytimes)*/
    // Not recommended to use below lines with inline functions
    static int c=0; // This executes only once
    c = c + 1;
    // cout<<c<<endl;
     // Next time this function is run, the value of c will be retained
    return a * b+c;
}

// float moneyReceived(int currentMoney, float factor = 1.50)
// {

//     return currentMoney * factor;
// }

// int strlen(const char *p){

// }

// float moneyR(int currency, float interest = 1.5) /*DEFAULT ARGUMENTS THAT IS INTEREST HERE */
// {
//     return currency * interest;
// }

int main()
{
    int a, b;
    // int money = 100000;

    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // int money = 100000;
    // cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;
    // cout<<"If you have "<<money<<" in your hand "<<"you will recieve "<<moneyReceived(money)<<" Rs after 1 year "<<endl;
    // cout << "For VIP: If you have " << money << " Rs in your bank account, you will recive " << moneyReceived(money, 1.8) << " Rs after 1 year";/*HERE WE HAVE TO NOTE THAT BY ABOVE WE ARE TAKING ONE ARGUMENTS BUT HERE I M TAKING TWO ARGUMENTS CAUSE INITIALLY WHEN WE ARE ONLY PASSING ONE ONE ARGUMENT THAT IS MONEY THEN  IN FUNCTION DEFINITION THERE IS OTHER PARAMETER FORMAL THAT IS BY DEFAULT SET FLOAT INTEREST =1.5 WHICH WILL CONSIDER AUTOMATIC IF WE DONT PASS HERE INTEREST IN ACTUAL PARAMETERS BUT WHEN WE ARE ACTUALLLY PASSING THE ACTUALL PARAMETER THAT IS TWO PARAMETRS TO FORMAL PARAMATERS THEN THEN THIS INTEREST WHICH IM PASSSING WLL GET AFFECTED IN RETURN VALUE SUPPOSE BY DEFAULT IT IS 1.5 AND WE ARE PASSING THE INTEREST VALUE AS 1.6 THEN INTERETS WOULD BECOME 1.6*MONEY FOR VIP CASE*/
        // cout<<"if you have money "<<money<<" in your bank you will recive money "<<moneyR(money)<<endl;
        // cout<<"if you are vip  "<<money<<" in your bank you will recive money is  "<<moneyR(money,2.5)<<endl;
        return 0;
}
