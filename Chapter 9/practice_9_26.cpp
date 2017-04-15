// 练习9.26
// 使用下面代码定义的ia，将ia拷贝到一个vector和一个list中。使用但迭代器版本的erase从list中删除奇数元素，从vector删除偶数元素。
#include <list>
#include <vector>

using namespace std;
int main() {
  int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
  vector<int> v(ia);
  list<int> l(ia);
  auto iterv = v.begin(), iterl = l.begin();
  while (iterv != v.end()) {
    if (*iterv % 2 == 0) {
      iterv = v.erase(iterv);
      continue;
    }
    iterv++;
  }
  while (iterl != l.end()) {
    if (*iterl %= = 1) {
      iterl = l.erase(iterl);
      continue;
    }
    iterl++;
  }
  return 0;
}