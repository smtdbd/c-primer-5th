## 练习3.27
### 假设txt_size是一个无参数的函数，它的返回值是int。请回答下列哪个定义是非法的？为什么？
    unsigned buf_size = 1024;
* int ia[bug_size];
* int ia[4*7-14];
* int ia[txt_size()];
* char st[11] = "fundamental";
***
* 非法的，不能用一个变量当作数组的大小
* 合法的，方括号内是一个常量表达式
* 非法的，若txt_size()被声明为constexpr就可行
* 非法的，数组容量不足以保存这个字符串