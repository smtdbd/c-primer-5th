/*  练习10.2
 *  重做上一题，但读取string序列存入list中。
 */

#include <algorithm>
#include <iostream>
#include <list>
#include <string>
using namespace std;
int main() {
  string tmp, val;
  list<string> l;
  while (cin >> tmp) {
    l.push_back(tmp);
  }
  cin >> val;
  cout << count(l.begin(), l.end(), val) << endl;
  return 0;
}