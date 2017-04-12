/*  练习3.5
 *  编写一段程序从标准输入中读入多个字符串并将他们连接在一起，输出链接成的大字符串。
 *  然后修改上述程序，用空格把输入的多个字符串分隔开来。
 */

#include <iostream>
#include <string>
using namespace std;
string from1()
{
	string res, tmp;
	while (cin >> tmp)
		res.append(tmp);
	return res;
}
string from2()
{
	string res, tmp;
	while (cin >> tmp)
	{
		res.append(tmp);
		res.push_back(' ');
	}
	return res;
}
int main()
{
	cout << from1() << endl;
	cout << from2() << endl;
	return 0;
}
