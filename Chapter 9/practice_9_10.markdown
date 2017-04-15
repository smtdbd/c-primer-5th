## 练习9.10
### 下面四个对象分别是什么类型？
    vector<int> v1;
    const vector<int> v2;
    auto it1 = v1.begin(), it2 = v2.begin();
    auto it3 = v1.cbegin(); it4 = v2.cbegin();
***
    vector<int>::iterator v1;
    const vector<int>::iterator v2, v3, v4;
由于v2是const容器，无论是begin()还是cbegin()都返回const迭代器