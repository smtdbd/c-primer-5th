## 练习5.4
### 说明下列例子的含义，如果存在问题，试着修改它。
    while(string::iterator iter != s.end()){}

    while(bool status = find (word)){}
        if(!status){}
***
* 此语句试图判定iter是否指向string的末尾，但是并没有初始化。合理的答案为：  
    string::iterator iter = s.begin();  
    while(iter!=s.end()){}
* 试图判断status的真假，但是status不在其定义的作用范围内，应该改为：  
    while(bool status = find (word)){  
        if(!status){}  
    }