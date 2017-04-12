/*  练习3.2
 *  编写一段程序从标准输入中一次读入一整行，然后修改改程序使其一次读入一个词。
 */

#include <iostream>

int main()
{
	string s;
	while (cin, s)
		cout << line << endl;   //一次读入一行
	while (cin >> s)
		cout << s << ' ';       //一次读入一个单词
	return 0;
}