## 练习4.32
### 解释下面这个循环的含义。
    constexpt int size = 5;
    int ia[size] = {1, 2, 3, 4, 5};
    for (int *ptr = ia, ix = 0;
    ix != size && ptr != ia+size;
    ++ix, ++ptr)
***
遍历ia数组