/*  练习6.33
 *  编写一个递归函数，输出vector对象的内容
 */
void foo(vector<int> v) {
  if (v.empty())
    return;
  auto iter = v.begin();
  cout << *iter << endl;
  iter++;
  vector<int> tmp(iter, v.end());
  foo(tmp);
}