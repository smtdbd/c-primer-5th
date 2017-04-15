/*  练习9.20
 *  编写程序，从一个list<int>拷贝元素到两个deque中。
 *  值为偶数的所有元素都拷贝到一个deque中，值为奇数的所有元素都拷贝到另一个deque中。
 */
#include <deque>
#include <list>

using namespace std;
void foo(list<int> input, deque<int> &output1, deque<int> &output2) {
  for (auto iter = input.begin(); iter != input.end(); iter++) {
    if (*iter % 2 == 0)
      output1.push_back(*iter);
    else
      output2.push_back(*iter);
  }
}