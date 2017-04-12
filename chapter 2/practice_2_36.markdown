## 练习2.36
### 关于下面的代码，请指出每一个变量的类型以及程序结束是它们各自的值。
    int a = 3, b = 4;
	decltype(a) c = a;
	decltype((b)) d = a;
	++c;
	++d;
***
a: int              4  
b: int              4  
c: int              4  
d: int&             4
