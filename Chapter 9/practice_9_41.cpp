/*  练习9.41
 *  编写程序，从一个vector<char>初始化一个string
 */
 #include<vector>
 #include<string>
 using namespace std;
 string foo(vector<char> input)
 {
     string res(input.data(),input.size());
     return res;
 }