## 练习2.21
### 请解释下述定义。在这些定义中有非法的吗？如果有，为什么？
    int i = 0;
* double* dp = &i;
* int *ip = i;
* int *p = &i;
***
* 非法，类型不合(int* -> double*)
* 非法，类型不合(int -> int*)
* 合法