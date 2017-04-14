/*  练习6.27
 *  编写一个函数，它的参数是initializer_list<int>类型的参数，函数的功能是计算列表中所有元素的和。
 */
int foo(initializer_list<int> l) {
  int res = 0;
  for (auto x : l)
    res += x;
  return res;
}