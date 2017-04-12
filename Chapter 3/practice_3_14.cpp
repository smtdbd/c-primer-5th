/*  练习3.14
 *  编写一段程序，用cin读入一组整数，并把他们存入一个vector对象
 */
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int tmp;
	while (cin >> tmp)
		v.push_back(tmp);
	return 0;
}
