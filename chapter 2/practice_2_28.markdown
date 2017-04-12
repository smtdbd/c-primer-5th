## 练习2.28
### 说明下面的定义时什么意思，挑出其中不合法的。
* int i, *const cp;
* int *p1, *const p2;
* const int ic, &r = ic;
* const int *const p3;
* const int *p;
***
* 非法的，cp是一个顶层const，它不能改变它指向的对象，因此必须初始化
* 非法的，p2是一个顶层const，它不能改变它指向的对象，因此必须初始化
* 非法的，ic作为一个const对象，必须初始化
* 非法的，p3是一个顶层const，它不能改变它指向的对象，因此必须初始化
* 合法的，但是p现在指向一个未知的地址。
