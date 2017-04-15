/*  练习8.1
 *  编写函数，接收一个istream&参数，返回值类型也是istream&。
 *  此函数需从给定流中读取数据，直至遇到文件结束标识时停止。
 *  他将读取的数据答应在标准输出上。
 *  完成这些操作后，在返回流之前，对流进行复位，使其处于有效状态。
*/
#include <iostream>
#include <stdexcept>
using namespace std;
istream &foo(istream &in) {
  char ch;
  while (in >> ch && !in.eof()) {
    if (in.bad())
      throw runtime_error("i/o error");
    if (in.fail()) {
      cerr << "data error" << endl;
      in.clear();
      in.ignore(100, '\n');
      continue;
    }
    cout << ch << endl;
  }
  in.clear();
  return in;
}
int main() {
  foo(cin);
  return 0;
}