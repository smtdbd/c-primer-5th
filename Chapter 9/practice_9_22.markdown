## 练习9.22
### 假定iv是一个int的vector，下面的程序存在什么错误？你将如何修改？
    vector<int>::iterator iter = iv.begin(),
                          mid = iv.begin() + iv.size()/2;
    while(iter != mid)
        if(*iter == some_val)
            iv.insert(iter, 2.some_val);
***
对vector执行插入操作后会使迭代器失效，应该改为：

    vector<int>::iterator iter = iv.begin(),
                          mid = iv.begin() + iv.size()/2;
    while(iter != mid){
        if(*iter == some_val){
            iter=iv.insert(iter, 2.some_val);
            continue;
        }
        iter++;
    }