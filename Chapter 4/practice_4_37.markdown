## 练习4.37
### 用你命名的强制类型转换改写下列旧式的转换语句
    int i; double d; const string *ps; char *pc; void *pv;
* pv = (void*)ps;
* i = int (*pc);
* pv = &d;
* pc = (char*) pv;
***
    pv = reinterpret_cast<void*> ps;
    i = static_cast<int> (*pc);
    pv = reinterpret_cast<void*> &d;
    pc = reinterpret_cast<char*> pv;