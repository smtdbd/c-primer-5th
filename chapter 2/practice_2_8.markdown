## 练习2.8
### 请利用转义序列编写一段程序，要求先输出2M，然后转到新一行。修改程序时期先输出2，然后输出制表符，在输出M，最后转到新一行。
    #include <iostream>
    using namespace std;
    int main()
    {
        cout << "2\x4d\012";
        cout << "2\tM\n";
        return 0;
    }