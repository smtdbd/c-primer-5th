## 练习2.23
### 给定指针p你能知道它是否指向了一个合法的对象吗？如果能，叙述判断的思路；如果不能，也请说明原因。
***
	try
	{
		if (p);		//do something...
	}
	catch (exception e)
	{
		//do something...
	}
用if判断，然后再用try语句包住。
若p指向NULL，即 p==nullptr 时，判断语句为假  
若p指向合法变量时，判断语句为真  
若p指向非法区域时，抛出异常