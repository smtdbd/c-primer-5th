## 练习6.48
### 说明下面这个循环的含义，它对assert的使用合理吗？
    string s;
    while(cin >> s && s != sought){}
    assert(cin);
***
不合法，要使while循环跳出，有两种情况：  
1. 用户中断了输入，这会导致之后的assert被触发
2. 输入的s与sought相同
