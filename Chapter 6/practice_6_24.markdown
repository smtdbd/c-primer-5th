## 练习6.24
### 藐视下面这个函数的欣慰。如果代码中存在问题，请指出并改正。
    void print(const int ia[10]) {
    for (size_t i = 0; i != 10; ++i)
        cout << ia[i] << endl;
    }
***
输出一个容量为10的数组中所有元素，但是其实任何长度的数组都可以被输入，应该被改为：  
    
    void print(const int ia, int sz) {
    for (size_t i = 0; i != sz; ++i)
        cout << ia[i] << endl;
    }