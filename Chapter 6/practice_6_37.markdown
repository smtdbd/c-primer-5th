## 练习6.37
### 为上一题的函数再写三个声明，一个使用类型别名，另一个使用尾置返回类型，最后一个使用decltype关键字。你觉得哪种形式最好，为什么？
***
    typedef string arr[10]
    arr& foo()

    auto foo() -> string(&) [10]

    string arr[10];
    decltype(arr) foo()