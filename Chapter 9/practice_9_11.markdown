## 练习9.11
### 对6种创建和初始化vector对象的方法，每一种都给出一个实例。解释每个vector包含什么值？
***
    vector<int> v1;                         //默认初始化，得到一个空vector
    vector<int> v2(10);                     //得到容量为10，每个元素为0的vector
    vector<int> v3(10,10);                  //得到容量为10，每个元素为10的vector
    vector<int> v4{1, 2, 3, 4};             //列表初始化，得到列表所示的vector
    vector<int> v5(v3);                     //复制v3
    vector<int> v6(v3.begin(),v3.end());    //复制两个迭代器之间的元素(包含begin,不包含end)