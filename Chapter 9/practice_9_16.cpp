/*  练习9.16
 *  重写上一题的程序，比较一个list<int>中的元素和一个vecotr<int>中的元素
 */
#include <list>
#include <vector>
using namespace std;
bool foo(list<int> input1, vector<int> input2) {
  auto iter1 = input1.begin(), iter2 = input2.begin();
  while (iter1 != input1.end(), iter2 != input2.end()) {
    if (*iter1 != *iter2)
      return false;
    iter1++, iter2++;
  }
  if (iter1 == input1.end() && iter2 == input2.end())
    return true;
  return false;
}