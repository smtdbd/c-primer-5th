/*  练习10.37
 *  给定一个包含10个元素的vector，将位置3到7之间的元素按逆序拷贝到一个list中
 */
 #include <iostream>
#include <fstream>
#include <vector>
#include <functional>
#include <iterator>
#include <list>
using namespace std;
int main(int argc, char** argv)
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9,0 };
	list<int> l;
	back_insert_iterator<list<int>> initer = back_inserter(l);
	auto iter1 = vec.crbegin() + 2;
	auto iter2 = vec.crend() - 3;
	while (iter1 < iter2)
	{
		iter1++;
		initer = *iter1;
		initer++;
	}
	for (auto x : l)
		cout << x << ends;
	system("pause");
	return 0;
}