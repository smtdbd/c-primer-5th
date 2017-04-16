/*  练习10.33
 *  编写程序，接收三个参数：一个输入文件和两个输出文件的文件名。
 *  输入文件保存的应该是整数。使用istream_iterator读取输入文件。
 *  使用ostream_iterator将奇数写入第一个文件，每个值后跟一个空格。
 *  将偶数写入第二个输出文件，每个值都独占一行。
*/

#include <iostream>
#include <fstream>
#include <functional>
#include <iterator>
using namespace std;
int main(int argc,char** argv)
{
	if(argc<4)
	{
		cerr << "error" << endl;
		return -1;
	}
	ifstream fin(argv[1]);
	ofstream fout1(argv[2]);
	ofstream fout2(argv[3]);
	if(!(fin&&fout1&&fout2))
	{
		cerr << "error" << endl;
		return -1;
	}
	istream_iterator<int> in(fin);
	ostream_iterator<int> out1(fout1), out2(fout2);
	ostream_iterator<char> cout1(fout1), cout2(fout2);
	while(fin)
	{
		if(*in&1)
		{
			out1 = *in;
			cout1 = ' ';
		}else
		{
			out2 = *in;
			cout2 = '\n';
		}
		in++;
	}
	fin.close();
	fout1.close();
	fout2.close();
	system("pause");
	return 0;
}