/*  练习3.35
 *  编写一段程序，利用指针将数组中的元素置为0
 */
#define MAX_SIZE 15
int main() {
  int a[MAX_SIZE];
  int *ap = &a[0];
  for (int x = 0; x < MAX_SIZE; x++)
    *(ap++) = 0;
  return 0;
}