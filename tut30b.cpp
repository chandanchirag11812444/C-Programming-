#include<iostream>
using namespace std;
class Point {
  int a,b;
  public:
  Point(int x,int y)
  {
      a=x;
      b=y;
  }
  void prinCoordinate(void)
  {
      cout<<"the value of x and y in 2D plane is "<<"(" <<a<<","<<b<<")"<<endl;
  }
};
int main(){
    Point a(2,3);
    a.prinCoordinate();
    // Point b(20,30);
    // b.prinCoordinate();
    Point b=Point(50,70);
    b.prinCoordinate();
    return 0;
}