## 练习9.34
### 假定vi是一个保存int的容器，其中有偶数值也有奇数值，分析下面循环的行为。
    iter=vi.begin();
    while(iter != vi.end())
        if(*iter % 2)
            iter = vi.insert(iter, *iter);
        ++iter;
***
本程序忘记添加了大括号，导致陷入死循环。
