#include <iostream>
using namespace std;

int add(int a, int b);

int add(int a, int b){
  return a + b;
}

typedef char str;

int main()
{
  str a = 'a';
  int c = add(1, 2);
  cout << c << endl;
  cout << "hello,vscode" << endl;
  cout << a << endl;
  return 0;
}
