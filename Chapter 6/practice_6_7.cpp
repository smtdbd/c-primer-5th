/*  练习6.7
 *  编写一个函数，当他第一次被调用时返回0，以后每次被调用返回值加一；
 */

int foo(void) {
  static int count = 0;
  return count++;
}