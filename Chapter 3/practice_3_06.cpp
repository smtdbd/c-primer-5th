/*  练习3.6
 *  编写一段程序，使用范围for语句将字符串内的所有字符用X代替
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	for (auto &x : s)
		x = 'X';
	cout << s << endl;
	return 0;
}