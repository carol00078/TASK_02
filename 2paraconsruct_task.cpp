#include <iostream>
using namespace std;
class student{
string name;
int age;
public:
student(string,int);
void print();
};
student::student(string n,int a){
 name=n;
 age=a;
}
void student::print(){
    cout<<"STUDENT NAME: "<<name<<endl;
    cout<<"STUDENT AGE : "<<age<<endl;
    cout<<endl;
}
int main(){
student s1("CAROL",12);
student s2("ALICE",14);
student s3("BOB",15);
s1.print();
s2.print();
s3.print();
return 0;
}