## 练习3.11
### 下面的范围for语句合法吗？如果合法，c的类型是什么？
    const string s = "Keep out!";
    for(auto &c : s){/*....*/}
***
合法，c的类型为const char&