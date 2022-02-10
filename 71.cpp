#include<iostream>
#include<vector>

using namespace std;
 template <class T>
void display(vector <T> &v)
{

    cout<<"displaying vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        // cout<<"displaying vector"<<endl;
        
        cout<<v[i]<<" ";
        // cout<<v.at(i)<<" ";

    }
    cout<<endl;
    
}
int main(){

    vector <int> v1;//with size zero
    vector <char> v2(4);//4 elements 
    vector <char> v3(v2);//v3 4 elemnts from v2
    vector <int> v4(6,3);//6 times 3s
    v2.push_back('5');
    // display(v4);
// display(v1);
display(v2);
//     vector <int> v1;
//     int size,element;
//     cout<<"enter the size of the element "<<endl;
//     cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"enter the elemnt to add to this vector"<<endl;
//         cin>>element;
//         v1.push_back(element);

//     }
//     // v1.pop_back();
// display(v1);
// vector <int>::iterator itr =v1.begin();
// // v1.insert(itr+1,500,500);
// display(v1);
int element ,size=5;

    
    return 0;
}