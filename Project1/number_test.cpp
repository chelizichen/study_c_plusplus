#include<iostream>

inline void test1(void) {
	unsigned short a = 65536;
	int b = int(a)+100;
	std::cout << "****" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << "****" << std::endl;
}

inline void test__1(void) {
	float a1 = 1.99;
	float a2 = 2.99;
	int c = a1 + a2;
	std::cout << "****" << std::endl;
	std::cout << c << std::endl;
	std::cout << "****" << std::endl;
}
