## 练习2.14
### 下面的程序合法嘛？如果合法，他将输出什么？
    int main()
    {
        int i = 100, sum = 0;
        for (int i = 0; i != 10; ++i)
            sum += i;
        cout << i << " " << sum << endl;
        return 0;
    }
合法
输出为：100 45