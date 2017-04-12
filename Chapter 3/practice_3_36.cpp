/*  练习3.36
 *  编写一段程序，比较两个数组是否相等。
 *  再写一段程序，比较两个vector对象是否相等
 */

#include <vector>
using namespace std;

bool foo(int *a, int *b, int size) {
  for (int x = 0; x < size; x++, a++, b++) {
    if (*a != *b)
      return false;
  }
  return true;
}
bool foo(vector<int> a, vector<int> b) {
  auto itera = a.begin();
  auto iterb = b.begin();
  while (1) {
    if (itera == a.end() && iterb == b.end())
      break;
    if (*itera != *iterb)
      return false;
    itera++;
    iterb++;
  }
  return true;
}