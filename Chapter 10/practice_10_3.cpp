/*  练习10.3
 *  用accumulate求一个vector<int>中的元素之和。
 */
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int foo(vector<int> input) { return accumulate(input.begin(), input.end(), 0); }