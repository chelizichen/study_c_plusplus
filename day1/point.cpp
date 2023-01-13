#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
  string username;
  string address;
  string email;
};
int main(){
  Person P1;
  Person *P2;

  P1.address = "123";
  P1.username = "456";
  P1.email = "789";
  P2 = &P1; // 取内存当中的一个地址
  cout << P2 << endl;
  cout << P2->address << endl;
  cout << P2->email << endl;
  cout << P2->username << endl;
}