## 练习3.18
### 下面的程序合法吗？如果不合法，你准备如何修改。
    vector<int> ivec;
    ivec[0]=42;
***
不合法，此时的ivec容量为0，若使用下标0试图读取其第一个元素，会发生越界错误。应该改为  

    ivec.push_back(42);