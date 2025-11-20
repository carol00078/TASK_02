#include <iostream>
using namespace std;
class book{
string title,author;
int price;
public:
book();
book(string ,string  ); //TAKES TWO PARAMETERS
book(string ,string ,int ); //TAKED THREE PARAMETERS
void display();
};
//DEFUALT CONSTRUCTOR
book::book(){
    title="NURSING";
    author="FLORENCE";
    price=600;
}
//PARAMETERIZED CONSTRUCTOR
book::book(string t,string a){
    title=t;
    author=a;
    price=0;
}
// 2nd PARAMETERIZED CONSTRUCTOR
book::book(string t,string a,int r){
    title=t;
    author=a;
    price=r;
}
//DISPLAY FUNCTION
void book::display(){
    cout<<"TITLE : "<<title<<endl;
    cout<<"AUTHOR: "<<author<<endl;
    cout<<"PRICE : "<<price<<endl;
    cout<<endl;
}

int main(){
book b1;
b1.display();

book b2("ANATOMY","CAROL");
b2.display();

book b3("SURGERY","PROF", 800);
b3.display();

return 0;
}