## 练习4.9
### 解释在下面的if语句中条件部分的判断过程
    const char *cp = "Hello World";
    if(cp && *cp)
***
先判断cp是否为空指针，若为空指针，由于条件判断的短路效应，直接为false
若不为空，开始判断cp指向的字符是否为'\n'，若是，则为false，若不是，则为true
