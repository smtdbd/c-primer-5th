/*  练习10.30
 *  使用流迭代器、sort和copy从标准输入读取一个整数序列，将其排序，并将结果写到标准输出
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <iterator>
using namespace std;
int main(int argc,char** argv)
{
	istream_iterator<int> in(cin);
	vector<int>vec;
	while(cin)
	{
		vec.push_back(*in);
			in++;
	}
	sort(vec.begin(), vec.end());
	for (auto x : vec)
		cout << x << ends;
	system("pause");
	return 0;
}