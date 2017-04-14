## 练习4.29
### 推断下面代码的输出结果并说明理由。实际运行这顿程序，结果和你想象的一样吗？如果不一样，为什么？
    int x[10]; int *p = x;
    cout << sizeof(x)/sizeof(*x) << endl;
    cout << sizeof(p)/sizeof(*p) << endl;
***

* * 32位：
  * 10
  * 1
* * 64位
  * 10
  * 2 