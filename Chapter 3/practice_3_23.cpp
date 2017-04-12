/*  练习3.23
 *  编写一段程序，创建一个含有10个整数的vector对象，然后使用迭代器将所有元素的值都变成原来的两倍。
 *  输出vector对象的内容，检验程序是否正确。
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v{ 1,2,3,4,5,6,7,8,9,0 };
	for (auto iter = v.begin(); iter < v.end(); iter++)
	{
		*iter *= 2;
	}
	for (auto x : v)
		cout << x << ' ';
	cout << endl;
	return 0;
}
