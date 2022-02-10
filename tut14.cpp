#include<iostream>
#include<iomanip>
using namespace std;

//  struct employee
// {
//     /* data */
//     int eId; //4
//     char favChar; //1
//     float salary; //4
// } ;

union money{
         int rice;
         char car;
         float pound;//union means out of three max size will be consider just to use better use of memory
};


int main(){
    //  enum meal{breakfast,lunch,dinner};
    // meal m;
    // // m=breakfast;
    // // m=lunch;
    // m=dinner;
    // cout<<(m==1)<<endl;
    
    //  cout<<breakfast<<endl;
    //  cout<<lunch<<endl;
    //  cout<<dinner<<endl;


      union  money chirag;
      chirag.rice=100;
      chirag.car='c';//use  one value  at aT A TIME suppose if i use car char then it will correct value of car but it will generate garbage value for rice aother variables which was being inialize by union above.
      cout<<chirag.car<<endl;//car value is being used here so in down rice value will throw a garbage value 
      
      cout<<chirag.rice<<endl;
      

    // struct employee chandan;
    // chandan.eId=100;
    // chandan.favChar='c';
    // chandan.salary=100.5;
    // cout<<"the eid is "<<setw(3)<<chandan.eId<<endl;
    //  cout<<"the favchar is "<<setw(3)<<chandan.favChar<<endl;
    //  cout<<"the eid is "<<setw(3)<<chandan.salary<<endl;
    return 0;
}
