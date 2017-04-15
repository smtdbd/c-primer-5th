## 练习9.9
### begin和cbegin两个函数有何不同？
***
* 对于非const容器：  
begin返回iterator，cbegin返回const iterator  
* 对于const容器：  
均返回const iterator