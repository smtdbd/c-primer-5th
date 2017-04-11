## 练习2.5
### 指出下属字面值的数据类型并说明每一组内几种字面值的区别：
***
* (a) 'a',L'a',"a",L"a"  
* (b) 10,10u,10L,10uL,012,0xc  
* (c) 3.14,3.14f,3.14L
* (d) 10,10u,10.,10e-2
***
* (a) 字符，宽字符，字符串，宽字符串
* (b) 整数，无符号整数，长整数，无符号长整数，八进制整数，十六进制整数
* (c) 浮点数，单精度浮点数，扩展精度浮点数
* (d) 整数，无符号整数，浮点数，科学记数法表示的浮点数
***
分别表示的类型为：  
* (a) char,wchar_t,string,wstring
* (b) int32_t,uint_32t,int64_t,uint64_t,int,int
* (c) double,float,long double
* (d) int,unsigned int, double,double