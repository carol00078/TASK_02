#include <iostream>
using namespace std;
class rectangle{
    int length,width;
    public:
    rectangle();  //DEFAULT CONSTRUCTOR
    rectangle(int , int);  //PARAMETERIZED CONSTRUCTOR
    void area();  //FUNCTION FOR AREA
};
rectangle::rectangle(){
    length=0;
    width=0;   
}
rectangle::rectangle(int x, int y){
    length=x;
    width=y;
}
void rectangle::area(){
    cout<<"area: "<<length*width<<endl;
}
int main(){
  rectangle r2;  
 rectangle r1(12,2);
 r1.area();
 r2.area();
return 0;
}