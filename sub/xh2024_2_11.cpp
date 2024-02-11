#include<iostream>
using namespace std;
class Person{
    friend ostream& operator<<(ostream& os,Person& person);
public:
    Person(int id,int age){
        mID = id;
        mAge = age;
    }
private:
int mID;
int mAge;
};

ostream& operator<<(ostream& os,Person& person){
    os << "ID:"<<person.mID<<"Age:"<<person.mAge;
    return os;
}
int main(){
    Person person(1001,30);
    cout<<person<<"|"<<endl;
    return EXIT_SUCCESS;
}
