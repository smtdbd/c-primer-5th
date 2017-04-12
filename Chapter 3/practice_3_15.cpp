/*  练习3.15
 *  改写上题的程序，不过这次读入的是字符串
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	vector<string> v;
	string tmp;
	while (getline(cin, tmp))
		v.push_back(tmp);
	return 0;
}
