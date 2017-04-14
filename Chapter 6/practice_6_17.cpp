/*  练习6.17
 *  编写一个函数，判断string对象中是否含有大写字母。
 *  编写另一个函数，把string对象全部改成小写形式。
 *在这两个函数中你使用的形参类型相同吗？为什么？
 */
#include <string>
bool foo1(const string &s) {
  for (auto x : s)
    if (isupper(x))
      return false;
  return true;
}
void foo2(string &s) {
  for (auto &x : s)
    if (isupper(x))
      x += 32;
}