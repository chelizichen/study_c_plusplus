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
  Person P3;
  P1.address = "P1 的地址";
  P1.username = "P1 的用户名";
  P1.email = "P1 的邮箱";

  P3.address = "P3 的地址";
  P3.username = "P3 的用户名";
  P3.email = "P3 的邮箱";
  P2 = &P1; // 取内存当中的一个地址
  P3 = P1;

  cout << &P1 << endl;
  cout << P2 << endl;
  cout << &P3 << endl;

  cout << "a"+P1.address << endl;
  cout << "a"+P1.email << endl;
  cout << "a"+P1.username << endl;

  cout << "b"+P2->address << endl;
  cout << "b"+P2->email << endl;
  cout << "b"+P2->username << endl;
  
  cout << "c"+P3.address << endl;
  cout << "c"+P3.email << endl;
  cout << "c"+P3.username << endl;
}