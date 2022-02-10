#include <iostream>
using namespace std;

int main()
{
    // int arr[]={1,2,3,4};
    // cout<<"the arr is "<<endl;
    // cout<<arr[0]<<endl;
    // cout<<arr[1]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    int arr[4];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    // cout << arr[0] << endl;
    // cout << arr[1] << endl;
    // cout << arr[2] << endl;
    // cout << arr[3] << endl;
    // int *p=arr;
    // cout<<*(p++)<<endl;
    // cout<<*(p)<<endl;
    // cout<<*(++p)<<endl;
    //    cout<<*(p++)<<endl;
    // cout<<"the value of first element is "<<*p<<endl;
    // cout<<"the value of second element is "<<*(p+1)<<endl;
    // cout<<"the value of third element is "<<*(p+2)<<endl;
    // cout<<"the value of fourth  element is "<<*(p+3)<<endl;
    // cout<<"adress of 4th element is  "<<(p+3*sizeof(int))<<endl;
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"the elements at index  "<< i+1  <<" is "<<arr[i]<<endl;
    // }
    //    int  i=0;
    // while(i<4)
    // {
    //    cout<<arr[i]<<endl;
    //    i++;
    // }
    int i=0;
    do{
        cout<<arr[i]<<endl;
        i++;
    }while(i<4);

    return 0;
}