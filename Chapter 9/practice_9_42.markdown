## 练习9.42
### 假定你希望每次读取一个字符存入一个string中，而且知道最少需要读取100个字符，又该如何提高程序的性能？
***
一开始定义string时就用reverse函数为其分配100字节的内存空间。