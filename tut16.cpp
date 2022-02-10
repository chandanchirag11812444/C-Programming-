// #include<iostream>
// using namespace std;
// // void swap(int *a, int *b)
// // {
// //    int temp=*a;
// //    *a=*b;
// //    *b=temp;
    
    
// // }
//  int & swapReference(int &x,int &y)
//  {
//      int temp=x;
//      x=y;
//      y=temp;
//   return x;
//  }
// int main(){
// //   int a=4,b=5;
// //   cout<<"the value of a is "<<a<<endl;
// //   cout<<"the value of b is "<<b<<endl;
// //   swap(4,5);
// //   cout<<"the value of a is "<<a<<endl;
// //   cout<<"the value of b is "<<b<<endl;
//      int a=4,b=5;
//      cout<<"the value of a is "<<a<<endl;
//      cout<<"the value of b is "<<b<<endl;
//     //   swap(&a,&b);
//       swapReference(a,b)=100;
//      cout<<"the value of a is "<<a<<endl;
//     cout<<"the value of b is "<<b<<endl;
#include<iostream>
using namespace std;

int sum(int a, int b){
    int c = a + b;
    return c;
}

// This will not swap a and b
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}

// Call by reference using pointers
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}

// Call by reference using C++ reference Variables
int & swapReferenceVar(int &a, int &b){ //temp a b
    int temp = a;          //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
    return a;
}

// void swapReferenceVar(int &a, int &b){ //temp a b
//     int temp = a;          //4   4  5   
//     a = b;               //4   5  5
//     b = temp;            //4   5  4 
//     // return a;
// }

int main(){
    int x =4, y=5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    // swap(x, y); // This will not swap a and b
    // swapPointer(&x, &y); //This will swap a and b using pointer reference
    // swapReferenceVar(x, y); //This will swap a and b using reference variables
    swapReferenceVar(x, y) = 766; //This will swap a and b using reference variables
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
    // return 0;
// }


    return 0;
}