/*  练习3.41
 *  编写一段程序，用整型数组初始化一个vector对象
 */

#include <vector>
using namespace std;
vector<int> initialise(int *a, size_t size) {
  vector<int> res;
  for (size_t x = 0; x < size; x++)
    res.push_back(a[x]);
  return res;
}