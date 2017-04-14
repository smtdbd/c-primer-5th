/*  练习6.3
 *  编写你自己的fact函数，上机检查是否正确。
 */

int fact(int val) { return fact(val - 1) * val; }