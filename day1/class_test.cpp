#include <iostream>
#include<string>
using namespace std;

class Person{
  public:
    string username;
    string address;
    string email;
    Person(string username, string email);
    Person();
    ~Person();
    string getDetail()
    {
      return this->address + this->email + this->username;
    }
};

Person::Person(string username, string email)
{
    this->username = username;
    this->email = email;
}
Person::Person(){
  
}

Person::~Person(void){
    cout << "生命周期结束" << endl;
}
int main(){
    Person person;
    person.address = "123";
    person.username = "123";
    person.email = "123";
    string a = person.getDetail();
    cout << a << endl;
}
