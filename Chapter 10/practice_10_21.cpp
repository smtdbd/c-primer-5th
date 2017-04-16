/*  练习10.21
 *  编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0.
 *  一旦变量为0，再调用lambda应该不在递减变量。
 *  lambda应该返回一个bool值，指出捕获的变量是否为0.
 */
int i;
[i] () mutable -> bool {
  if (i > 0) {
    i--;
    return false
  } else {
    return true;
  }
};