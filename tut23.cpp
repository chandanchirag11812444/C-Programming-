// #include <iostream>
// using namespace std;
// class Shop
// {
//     int priceId[100];
//     int priceItemprice[100];
//     int counter;

// public:
//     void initCounter(void) { counter = 0; }
//     void setPrice(void);
//     void displayPrice(void);
// };
// void Shop::setPrice(void)
// {
//     cout << "enter the price id " << counter + 1 << endl;
//     cin >> priceId[counter];
//     cout << "enter the price of priceitem " << endl;
//     cin >> priceItemprice[counter];
//     counter++;
// }
// void Shop::displayPrice(void)
// {
//     for (int i = 0; i < counter; i++)
//     {
//         cout << "the price of the item with the price id " << priceId[i] << " is " << priceItemprice[i] << endl;
//     }
// }
// int main()
// {
//     Shop dukaan;
//     dukaan.initCounter();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.setPrice();
//     dukaan.displayPrice();

//     return 0;
// }
#include<iostream>
using namespace std;
   class Shop{
     /*item no,item id,counter */
     int itemId[100];
     int itemPrice[100];
     int counter;
     public:
     void inializeCounter(void)
     {
         counter=0;
     }
     void setitemIdandP(void)
     {
              cout<<"Enter the item no "<<counter+1<<endl;
              cin>>itemId[counter];
              cout<<"Enter the item price "<<endl;
              cin>>itemPrice[counter];
              counter++;
     }
      
    void display(void)
    {
        for(int i=0;i<counter;i++)
        {
            cout<<"The itemid of "<<itemId[i]<<" with price is "<<itemPrice[i]<<endl;
        }
    }


   };
int main(){
    Shop obj;
    obj.inializeCounter();
    obj.setitemIdandP();
    obj.setitemIdandP();
    obj.setitemIdandP();
    obj.display();
    
    return 0;
}