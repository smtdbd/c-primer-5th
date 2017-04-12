/*  练习3.17
 *  从cin读入一组词并把他们存入一个vector对象，然后设法把所有词都改写为大写形式。
 *  输出改变后的结果，每个词占一行
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	string tmp;
	while (cin>>tmp)
	{
		for (auto &x : tmp)
			if (islower(x))
				x -= 32;
		v.push_back(tmp);
	}
	for (auto x : v)
		cout << x << endl;
	return 0;
}
