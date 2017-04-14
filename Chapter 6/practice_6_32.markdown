## 练习6.32
### 下面的函数合法吗？如果合法，说明其功能，如果不合法，修改其中的错误并解释原因
    int &get(int *array, int index) { return arry[index] }
    int main()
    {
        int ia[10];
        for (int i = 0; i != 10; ++i)
            get(ia, i) = i;
    }
***
该函数是合法的，它接受一个整型指针，并返回一个int引用。