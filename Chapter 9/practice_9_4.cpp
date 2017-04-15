/*  练习9.4
 *  编写函数，接收一对指向vector<int>的迭代器和一个int值。
 *  在两个迭代器指定的范围中查找给定的值，返回一个布尔值来指出是否找到。
 */
#include <vector>
using namespace std;
bool foo(vector<int>::iterator begin, vector<int>::iterator end, int value) {
  while (end > begin) {
    end--;
    if (*end == value)
      return true;
  }
  return false;
}