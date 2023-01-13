#include <iostream>
#include<string>
using namespace std;


typedef char str;

int main()
{
  auto a = "123";

  short int a1;
  short unsigned a2;

  a2 = 50000;
  a1 = a2;

  cout << a << endl; // -15536
  cout << a1 << endl; // -15536
  cout << a2 << endl; // 50000


  // cout << b << endl;
  // cout << "hello,vscode" << endl;
  // cout << a << endl;
  // cout << PI << endl;
  return 0;
}
