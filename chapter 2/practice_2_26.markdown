## 练习2.26
### 下面哪些句子时合法的？如果有不合法的句子，请说明为什么？
* const int buf;
* int cnt = 0;
* const int sz = cnt;
* ++cnt; ++sz;
***
* 非法的，一个未初始化的const对象
* 合法的
* 合法的
* 非法的，试图更改const对象sz的值