## 练习10.7
### 下面程序是否有错误，如果有，请改正。
***
```cpp
vector<int> vec; list<int> lst; int i;
while (cin >> i)
    lst.push_back(i);
copy(lst.cbegin(), lst.cend(), vec.begin());
```
* 由于初始化时vec是一个size为0的vector，用普通迭代器无法插入数据，可以使用插入迭代器。  
copy(lst.cbegin(), lst.cend(), back_inserter(vec));
```cpp
vector<int> vec;
vec.reserve(10);
fill_n(vec.begin(), 10, 0);
```
* 错，reserve操作只是改变了vector所占用内存的大小，并未改变它的Size。应改为：  
vec.resize(10);