/*  练习3.42
 *  编写一段程序，将含有整数元素的vector对象拷贝给一个整型数组
 */

#include <vector>
using namespace std;
int *initialise(vector<int> v) {
  int *res = (int *)malloc(sizeof(int) * v.size());
  int x = 0;
  for (auto n : v)
    res[x++] = n;
  return res;
}