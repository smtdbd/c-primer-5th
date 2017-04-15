## 练习9.39
### 解释下面程序做了什么
    vector<string> svec;
    svec.reserve(1024);
    string word;
    while(cin >> word)
        svec.push_back(word);
    svec.resize(svec.size()+svec.size()/2);
***
1. 定义了一个保存string的vector并为其分配了1024个元素的空间
2. 从标准输入中读取字符串，保存进svec
3. 结束输入后，再向svec后方添加目前元素个数一半的空串。