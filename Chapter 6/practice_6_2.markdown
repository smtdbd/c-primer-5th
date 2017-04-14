## 练习6.2
### 请指出下列函数那个有错误，为什么？应该如何修改这些错误呢？
    int f(){
        string s;
        //....
        return s;
    }

    f2(int i){}

    int calc(int v1, int v1) }

    double square(doublex) return x*x;
***
* 实际返回值类型和声明的不同
* 缺少返回值类型
* 形参名冲突，缺少{
* 函数体没有用大括号包围起来