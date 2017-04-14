## 练习4.38
### 说明下面这条表达式的含义
    double slope = static_cast<double> (j/i);
***
将j/i的结果转换为double存入slope中，即使i和j都是整数，执行了整数除法。