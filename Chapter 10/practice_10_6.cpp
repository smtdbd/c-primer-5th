/*  练习10.6
 *  编写程序，使用fill_n将一个序列中的int值都设为0.
 */
#include <algorithm>
#include <iostream>
#include <list>

using namespace std;
void foo(list<int> &input) { fill_n(input.begin(), input.size(), 0); }