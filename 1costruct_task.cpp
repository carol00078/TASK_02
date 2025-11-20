#include <iostream>
using namespace std;
class student{
    string name;
    int age;
    public:
    student(); //DEFUALT CONSTRUCT MEANS VALUES ALREADY GIVEN
    void print();
};
 student::student(){
    name="carol";
    age=12;
}
void student::print(){
    cout<<"STUDENT NAME: "<<name<<endl;
    cout<<"STUDENT AGE : "<<age<<endl;
}
int main(){
student s1;
s1.print();
return 0;
}