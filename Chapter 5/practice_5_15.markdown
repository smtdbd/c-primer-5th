## 练习5.15
### 说明下列循环的含义并改正其中的错误
     for(int ix = 0; ix != sz; ++ix){}
        if(ix != sz)
            //....
    
    int ix;
    for(ix != sz;++ix){}
    
    for( int ix = 0;ix != sz; ++ix, ++sz){}
***
* ix脱离了它的作用域  
应该改为：  
int ix;  
for(ix = 0; ix != sz; ++ix){}  
        if(ix != sz)  
            //....
* for循环不完整，应该改为：  

    int ix;  
    for(ix= 0; ix != sz; ++ix){}
* 会陷入死循环