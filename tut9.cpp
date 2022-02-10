#include<iostream>
using namespace std;
int main()
{
   //selection control structure that means checking conditions 
//    if else-if else ladder 
    // int age;
    // cout<<"enter you age"<<endl;
    // cin>>age;
    // if(age<18)
    // {
    //     cout<<"you cannot go to the party "<<endl;
    // }
    // else if(age==18)
    // {
    //     cout<<"you can go to the party "<<endl;
    // }
    // else{
    //      cout<<"you can go to the party and enjoy as well "<<endl;
    // }selection control structure 
    // switch
    int age ;
  
    cout<<"enter age  "<<endl;
    cin>>age;
    switch (age)
    {
    case 18 :
        
        cout<<"the age is 18 "<<endl;

        //  break;
        case 19 :
        
        cout<<"the age is 19 "<<endl;

        // break;
        case 20 :
        
        cout<<"the age is 20 "<<endl;

        // break;
        case 21 :
        
        cout<<"the age is 21 "<<endl;

        // break;
    
    default:
    cout<<"the age is  invalid "<<endl;
        break;
    }
cout<<"done with switch case "<<endl;


    return 0;
}
