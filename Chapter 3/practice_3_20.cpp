/*  练习3.20
 *  读入一组整数并把他们存入一个vector对象，将没对相邻整数的和输出出来。
 *  改写你的程序，这次要求先输出第一个和最后一个元素的和，接着输出第二个和倒数第二个元素的和，以此类推。
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
	auto iter1 = v.begin();
	auto iter2 = iter1 + 1;
	while (v.end() - iter2 > 2)
	{
		cout << *iter1 + *iter2 << ' ';
		iter1 += 2;
		iter2 += 2;
	}
	cout << endl;
	iter1 = v.begin();
	iter2 = v.end() - 1;
	while (iter2 >= iter1)
	{
		cout << *iter1 + *iter2 << ' ';
		iter1++;
		iter2--;
	}
	return 0;
}
