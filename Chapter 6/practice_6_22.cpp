/*  练习6.22
 *  编写一个函数使其交换两个int指针
 */
void foo(int *a, int *b) {
  int *tmp = a;
  a = b;
  b = tmp;
}