/*  练习4.21
 *  编写一段程序，使用条件运算符从vector<int>中找到哪些元素的值是技术，然后将这些奇数值翻倍
 */

#include <vector>
using namespace std;
void foo(vector<int> &input) {
  for (auto &x : input) {
    x = x % 2 == 0 ? x : x * 2;
  }
}