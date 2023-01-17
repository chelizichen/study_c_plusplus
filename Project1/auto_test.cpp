#include <iostream>
#include <vector>

inline void vector_test(void) {
	using namespace std;
	auto a = 1;
	vector<int> a_1;
	a_1.push_back(1);
	a_1.push_back(2);
	a_1.push_back(3);
	a_1.push_back(4);
	a_1.push_back(5);
	a_1.push_back(6);

	int size = a_1.size();
	cout << "遍历 vector 数据结构" << endl;
	for (size_t i = 0; i < size; i++)
	{
		cout<<a_1[i]<<endl;
	}


}

