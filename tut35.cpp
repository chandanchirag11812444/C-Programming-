#include<iostream>
using namespace std;
int count =0;
class num{
public:
      num(){
          count++;
          cout<<"the constructor is called for obj number"<<count<<endl;
      }
      ~num()
      {
          cout<<"the destructor is called for obj number"<<count<<endl;
          count--;
      }
};
int main(){
    //destructor never takes any argument nor it returns any return value
     cout<<"we are inside the main function"<<endl;
     cout<<"im going to create oject now that is num1 "<<endl;
     num num1;
     {
         cout<<"entering this block"<<endl;
         cout<<"im going to create two objects now "<<endl;
         num num2,num3;
         cout<<"existing this block"<<endl;
     }
     cout<<"back to main"<<endl;

    return 0;
}