/*  练习9.14
 *  编写程序，将一个list中的char*指针(指向C风格字符串)元素赋值给一个vector中的string
 */
#include <list>
#include <string>
#include <vector>
using namespace std;
vector<string> foo(list<char *> input) {
  vector<string> res(input.begin(), input.end());
  return res;
}