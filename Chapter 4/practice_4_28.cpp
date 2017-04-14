/*  练习4.28
 *  编写一段程序，输出每一种内置类型所占空间的大小
 */
#include <iostream>
using namespace std;

int main()
{
	cout <<"short: "<< sizeof(short) << endl;
	cout << "pointer: " << sizeof(void*) << endl;
	cout << "long double: " << sizeof(long double) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "char: " << sizeof(char) << endl;
	return 0;
}
