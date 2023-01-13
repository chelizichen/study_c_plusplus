# C++学习记录

````cmd
command + shfit + b  编译
command + r 运行
````

````c++
  typedef char str;
  用来定义类型

  Person P1;
  Person *P2;

  P1.address = "123";
  P1.username = "456";
  P1.email = "789";

  P2 = &P1; // 
  cout << P2 << endl; // 打印出来的是P1 的地址
  
  cout << P2->address << endl;
  cout << P2->email << endl;
  cout << P2->username << endl;

````
