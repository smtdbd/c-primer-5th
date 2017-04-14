## 练习6.52
### 已知有如下声明
    void manip(int,int);
    double dobj;
请指出下列调用中每个类型转换的等级
***
* manip('a','z');  
3 通过类型提升实现的匹配
* manip(55.4,dobj);  
4 通过算数类型转换实现的匹配