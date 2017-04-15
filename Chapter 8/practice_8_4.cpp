/*  练习8.4
 *  编写函数，以读模式打开一个文件，将其内容读入到一个string的vector中。
 *将每一行作为一个独立的元素存于vector中。
 */
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
int main() {
  vector<string> v;
  string line;
  ifstream input("a.txt");
  if (!input) {

    cerr << "file error" << endl;
    return -1;
  }
  while (getline(input, line)) {
    v.push_back(line);
  }
  input.close();
  for (auto x : v)
    cout << x << endl;
  system("pause");
  return 0;
}