## 练习2.38
### 说明由decltype指定类型和由auto指定类型有何区别。请举出一个例子，decltype指定的类型和auto指定的类型一样；再举一个例子，decltype指定的类型与auto指定的类型不一样
***
1. decltype指定类型由一个表达式确定，但并不会计算这个表达式。auto通过给变量赋予的初始值来判定，需要计算右值，且auto变量必须初始化。decltype不一定。
2. auto一般会忽略顶层const，而decltype不会

    int a = 0, b = 0;
    auto c = a;
    decltype(a) c1 = a;  //相同，均为int
    auto d = a + b;
    decltype(a + b) d1 = a + b;    //不同，d为int，d1为int&