/*  练习6.25
 *  编写一个main函数，令其接收两个实参。把实参的内容链接成一个string对象并输出出来
 */
#include <iostream>
using namespace std;
int main(int argc, char *argv[]) {
  string s;
  s.append(argv[0]);
  s.append(argv[1]);
  cout << s << endl;
}