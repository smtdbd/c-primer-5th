/*  练习10.29
 *  编写程序，使用流迭代器读取一个文本文件，存入一个vector中的string里。
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <functional>
#include <iterator>
using namespace std;
int main(int argc,char** argv)
{
	vector<string> vec;
	if (argc < 2)
		return -1;
	ifstream fin(argv[1]);
	if (!fin)
		return -1;
	istream_iterator<string> in(fin);
	while(fin){
		vec.push_back(*in);
		in++;
	}
	for (auto x : vec)
		cout << x << endl;
	system("pause");
	return 0;
}