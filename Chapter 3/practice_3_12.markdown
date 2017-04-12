## 练习3.12
### 下列vector对象的定义由不正确的吗？如果由，请指出来。对于正确的，描述其执行结果；对于不准确的，说明其错误的原因。
    vector<vector<int>> ivec;
    vector<string> svec =ivec;
    vector<string> svec(10, "null");
***
* 合法的
* 非法的，svec和ivec所包含的元素类型不同
* 合法的