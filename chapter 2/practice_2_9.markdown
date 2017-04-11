## 练习2.9
### 解释下列定义的含义。对于非法的定义，请说明错在何处并将其改正
* std::cin >> int input_value;
* int i = {3.14};
* double salary = wage = 9999.99;
* int i = 3.14
***
* 错误，在执行cin时，input_value并未被声明，应改为  
     int input_value;  
     std::cin >> input_value;
* 正确，列表初始化了一个变量i，但是将一个浮点值赋给一个int变量，会引发warning
* 错误，wage没有被声明。应改为：  
double salary,wage;  
salary = wage = 9999.99;
* 正确，但是将一个浮点值赋给一个int变量，会引发warning