## 练习6.19
### 假定有如下声明，判断那个调用合法、那个调用不合法。对于不合法的函数调用，说明原因。
    double calc(double);
    int count(const string &,char);
    int sum(vector<int>::iterator, vector<int>::iterator,int)
    vector<int> vec(10);
***
* calc(23.4,55.1)  
    不合法，实参过多。
* count("abcda",'a');  
合法
* calc(66)
合法
* sum(vec.begin(),vec.end(),3.8)
合法。
