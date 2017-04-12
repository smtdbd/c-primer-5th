## 练习3.13
### 下列的vector对象个包含多少个元素？这些元素的值分别是多少？
    vector<int> v1;
    vector<int> v2(10);
    vecotr<int> v3(10, 42);
    vecotr<int> v4{10};
    vector<int> v5{10,42};
    vector<string> v6{10};
    vecotr<string> v7{10, "hi"};
***
* 0个元素
* 10个元素，值均为0
* 10个元素，值均为42
* 1个元素，值为10
* 2个元素，值分别为10和42
* 10个元素，均为空串
* 10个元素，均为"hi"