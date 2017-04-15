/*  练习9.18
 *  编写程序，从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素。
 */
#include <deque>
#include <iostream>
#include <string>

using namespace std;
int main() {
  string s;
  deque<string> d;
  while (getline(cin, s)) {
    d.push_back(s);
  }
  auto iter = deque.begin();
  while (iter != deque.end())
    cout << *iter << endl;
  return 0;
}