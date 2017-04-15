## 练习9.37
### 为什么list或array没有capacity成员函数？
***
list所占内存是实时分配的，也就是是capacity=size  
array所占的内存是在一开始时已经定义了的且不能更改。