## 练习9.6
### 下面程序有何错误？你应该如何修改它？
    list<int> lst1;
    list<int>::iterator iter1 = lst1.begin();
                        iter2 = lst1.end();
    while(iter1 < iter2){/*....*/}
***
由于list容器是一个双向链表，所以元素的储存在内存中不是顺序的，无法通过大于，小于符号来判断。应该改为

    while(iter1 != iter2){/*....*/}