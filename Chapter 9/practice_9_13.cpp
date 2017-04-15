/*  练习9.13
 *  如何从一个list<int>初始化一个vector<double>？
 *  从一个vector<int>又该如何创建？
 *  编写代码验证你的答案。
 */
#include <list>
#include <vector>
using namespace std;

vector<double> foo1(list<int> input) {
  vector<double> res;
  for (auto x : input)
    res.push_back(x);
  return res;
}
vector<double> foo2(vector<int> input) {
  vector<double> res;
  for (auto x : input)
    res.push_back(x);
  return res;
}