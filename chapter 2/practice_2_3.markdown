## 练习2.3
### 读程序写结果
    unsigned u = 10, u2 = 42;               
	std::cout << u2 - u << std::endl;       //32
	std::cout << u - u2 << std::endl;       //4294967264
	int i = 10, i2 = 42;
	std::cout << i2 - i << std::endl;       //32
	std::cout << i - i2 << std::endl;       //-32
	std::cout << i - u << std::endl;        //0
	std::cout << u - i << std::endl;        //0

原因：
    std::cout << u2 - u << std::endl;       
	std::cout << u - u2 << std::endl;  
    第一个为正常减法，第二个发生了溢出  
    std::cout << i2 - i << std::endl;   
	std::cout << i - i2 << std::endl;   
    均为正常减法  
    std::cout << i - u << std::endl;      
	std::cout << u - i << std::endl;
    发生了unsigned int -> int的隐式转换，随后为正常减法。