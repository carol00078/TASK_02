#include <iostream>
using namespace std;
enum Weekdays {sunday,monday,tuesday,wednesday,thursday,friday,saturday};
int main(){
 //week today=tuesday;
int dayNumber;
 cout << "Enter a number (1-7) to get the weekday: ";
    cin >> dayNumber;

    Weekdays today = static_cast<Weekdays>(dayNumber); // Convert number to enum

 switch(today){
    case sunday: cout<<"IT IS SUNDAY\n";break;
    case monday: cout<<"IT IS MONDAY\n";break;
    case tuesday: cout <<"IT IS TUESDAY\n"<<tuesday<<endl;break;
    case wednesday: cout <<"IT IS WEDNESDAY\n";break;
    case thursday: cout <<"IT IS THURSDAY\n";break;
    case friday: cout <<"IT IS FRIDAY\n";break;
    case saturday: cout <<"IT IS SATURDAY\n";break;
    default: cout<<"INVALID\n";break;
 }
return 0;
}