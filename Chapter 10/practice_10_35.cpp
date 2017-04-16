/*  练习10.35
 *  使用普通迭代器逆序打印一个vector
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <functional>
using namespace std;
int main(int argc, char** argv)
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	auto iter = vec.cend();
	while (iter > vec.cbegin())
	{
		iter--;
		cout << *iter << ends;
	}
	system("pause");
	return 0;
}