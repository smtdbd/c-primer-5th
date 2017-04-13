/*  练习3.39
 *  编写一段程序，比较两个string对象。在编写一段程序，比较两个C风格字符串的内容
 */
#include <string>
using namespace std;
int compare(string s1, string s2) {
  auto itera = s1.begin();
  auto iterb = s2.begin();
  while (itera < s1.end() && iterb < s2.end()) {
    if (*itera > *iterb)
      return 1;
    else if (*itera < *iterb)
      return -1;
  }
  if (itera == s1.end() && iterb != s2.end())
    return -1;
  else if (itera != s1.end() && iterb == s2.end())
    return 1;
  return 0;
}
int compare(char *s1, char *s2) {
  while (*s1 != '\0' && *s2 != '\0') {
    if (*s1 > *s2)
      return 1;
    else if (*s1 < *s2)
      return -1;
  }
  if (*s1 == *s2)
    return 0;
  else if (*s1 == '\0')
    return -1;
  else
    return 1;
}