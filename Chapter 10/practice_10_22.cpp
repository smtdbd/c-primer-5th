/*  练习10.22
 *  重写统计长度小于等于6的单词数量的程序，使用函数替代lambda
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
bool check_size(const string &s,int sz)
{
	return s.size() <= sz;
}
int main()
{
	vector<string>vec;
	string s;
	while (cin >> s)
		vec.push_back(s);
	int count=count_if(vec.cbegin(), vec.cend(), bind(check_size, placeholders::_1, 6));
	cout << count << endl;
	system("pause");
	return 0;
}