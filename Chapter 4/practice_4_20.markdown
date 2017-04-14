## 练习4.20
### 假设iter的类型是vector<string>::iterator，说明下面的表达式是否合法，如果合法表达式的含义是什么？如果不合法，错在何处？
* *iter++;
* (*iter)++;
* *iter.empty();
* iter->empty();
* ++*iter;
* iter++->empty();
***
* 合法的，先取出iter所指的string，再让iter指向下一个位置
* 非法的，先对iter取值，再自增1，但是string没有自增操作
* 合法的，先对iter取值，再判断是否为空串。
* 合法的，同上
* 非法的，先对iter解引用，再后置自增1，但是string没有自增操作
* 合法的，先将iter指向下一个元素，再判断指向的string是否为空串
