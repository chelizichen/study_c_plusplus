#include <iostream>
#include "Project1/sout_number.cpp"
#include "Project1/sout_char.cpp"
#include "Project1/flt_add.cpp"
#include "Project1/number_test.cpp"
#include "Project1/auto_test.cpp"
using namespace std;

struct math {
	int add(int a, int b);
};

int math::add(int a, int b) {
	return a + b;
}

void test_a(void) {
	cout << "\a" << endl;
}

int main() {
	vector_test();
	test1();
	test__1();
	cout << a_1111 << endl;
	test_a();
	soutNumber();
	say();
	flt_add();
	math m;
	int a1 = m.add(1, 2);
	cout << a1 << endl;

	printf("hello world");
	return 0;
}

