## 练习3.37
### 下面的程序是何含义，程序的输出结果是什么？
    const char ca[] = {'h', 'e', 'l', 'l', 'o'};
    const char *cp = ca;
    while(*cp){
        cout << *cp << endl;
        ++cp;
    }
***
依次输出这个c风格字符串的每一个字符，且每个字符都占一行  
结果：  
h  
e  
l  
l  
o