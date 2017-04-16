/*  练习10.13
 *  头文件algorithm中定义了一个名为count的函数，它类似于find，接收一对迭代器和一个值作为参数。
 *  count返回定值在序列中出现的次数。
 *  编写程序，读取int序列存入vector中，打印有多少个元素的值等于给定值。
*/
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  int tmp, val;
  vector<int> v;
  while (cin >> tmp) {
    v.push_back(tmp);
  }
  cin >> val;
  cout << count(v.begin(), v.end(), val);
  return 0;
}