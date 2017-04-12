## 练习2.32
### 下面的代码是否合法？如果非法，请设法将其修改正确。
    int null = 0, *p = null;
***
非法，应改为  

    int null = 0, *p = &null;       //若意在指向变量null
    int null = 0, *p = nullptr;     //
    int null = 0, *p = NULL;        //若意在创建一个int* 型的空指针