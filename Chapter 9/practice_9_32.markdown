## 练习9.33
### 在本节最后一个例子中，如果不将insert的结果赋予begin，将会发生什么？
***
如果不赋予的话，可能会在插入之后vector重新分配空间，导致begin指向错误的内存。