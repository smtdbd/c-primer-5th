/*  练习3.4
 *  编写一段程序读入两个字符串，比较其是否相等并输出结果。
 *  如果不相等，输出较大的哪个字符串。
 *  改写行数程序，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串
 */
#include <iostream>
#include <string>
using namespace std;
void compar1(string s1, string s2)
{
	if (s1 == s2)
		cout << "相等" << endl;
	else if (s1 > s2)
		cout << s1 << endl;
	else
		cout << s2 << endl;
}
void compar2(string s1, string s2)
{
	int l1, l2;
	l1 = s1.length();
	l2 = s2.length();
	if (l1 == l2)
		cout << "相等" << endl;
	else if (l1 > l2)
		cout << s1 << endl;
	else
		cout << s2 << endl;
}
int main()
{
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	compar1(s1, s2);
	compar2(s1, s2);
	return 0;
}
