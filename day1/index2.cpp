#include <iostream>
#include <string>
using namespace std;

#define PI 3.1415926

static int count = 10;

int add(int a, int b);
int add(int a, int b, int c);
int add(int a, int b)
{
  return a + b;
}
int add(int a, int b, int c)
{
  return a + b + c;
}

int main(){
  int c = add(1, 2);
  int d = add(1, 2, 3);
  cout << c << endl;
  cout << d << endl;
}