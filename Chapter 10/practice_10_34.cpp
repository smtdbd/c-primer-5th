/*  练习10.34
 *  使用reverse_iterator逆序打印一个vector
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <functional>
#include <iterator>
using namespace std;
int main(int argc,char** argv)
{
	vector<int> vec = { 1,2,3,4,5,6,7,8,9 };
	auto iter = vec.crbegin();
	while(iter<vec.crend())
	{
		cout << *iter << ends;
		iter++;
	}
	system("pause");
	return 0;
}