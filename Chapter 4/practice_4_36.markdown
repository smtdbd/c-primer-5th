## 练习4.36
### 假设i是int类型，d是double类型，书写表达式i*=d使其执行整数类型的乘法而非浮点类型的乘法
***
    i *= static_cast<int>d;