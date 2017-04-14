## 练习6.39
### 说明在下面的每组声明中第二条声明语句是何含义。如果有非法的声明，请指出来。
    int calc(int,int);
    int calc(const int, const int);

    int get();
    double get();

    int *reset(int *);
    double *reset(double*);
***
* 非法，顶层const无法用于区分重载的函数
* 非法，返回值类型无法用于区分重载的函数
* 合法。