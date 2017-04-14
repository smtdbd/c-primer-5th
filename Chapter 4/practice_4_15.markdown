## 练习4.15
### 下面的赋值时非法的，为什么？应该如何修改？
    double dval; int ival; int *pi;
    dval = ival = pi = 0;
***
无法将一个地址赋值给一个int对象  
应该改为  

    dval = ival = 0;
    ip = nullptr;