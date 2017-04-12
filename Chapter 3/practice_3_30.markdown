## 练习3.30
### 指出下面代码中的索引错误
    constexpr size_t array_size = 10;
    int ia[array_size];
    for(size_t ix = 1; ix <= array_size; ++ix)
        ia[ix] = ix;
***
因为数组的下标范围是0~9，所以for循环应该改为：  

    for(size_t ix = 0; ix<array_size; ++ix)

