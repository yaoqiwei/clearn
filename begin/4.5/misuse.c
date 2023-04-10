#include <stdio.h>

int imax(int, int); /* 旧式函数声明 */
int main(void)
{
  printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 4));
  printf("The minimum of %d and %d is %d.\n", 3, 5, imax(3, 5));
  return 0;
}

int imax(n, m)
int n, m;
{
  return (n > m ? n : m);
}