## 练习3.19
### 如果想定义一个含有10个元素的vector对象，所有元素的值都是42，请列举出三种不同的实现方法。哪种方法更好呢？为什么？
***
    vector<int> v1 = {42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
    vector<int> v2(10, 42);
    vector<int> v3{42, 42, 42, 42, 42, 42, 42, 42, 42, 42};
第二种更好，不仅简短，还能清楚地表明到底有几个重复元素。