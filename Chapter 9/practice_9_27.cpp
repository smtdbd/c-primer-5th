/*  练习9.27
 *  编写程序，查找并删除forward_list<int>中的奇数元素。
 */
#include <forward_list>
using namespace std;
void foo(forward_list<int> &input) {
  auto iter = input.begin(), iter2 = input.before_begin();
  while (iter != input.end()) {
    if (*iter % 2 == 1)
      iter = input.erase_after(iter1);
    else {
      iter1 = iter;
      iter++;
    }
  }
}