#include <stdio.h>

int main(void)
{
  // int count, sum;
  // count = 0;
  // sum = 0;
  // while (count++ < 20)
  // {
  //   sum = sum + count;
  //   printf("sum = %d\n", sum);
  // }

  // int index = 0;
  // int sam;
  // while (++index < 10)
  // {
  //   printf("index = %d\n", index);
  // }

  // printf("index1 = %d\n", index);
  // printf("index2 = %d\n", index);
  // sam = 10 * index + 2;`
  // printf("sam = %d\n", sam);

  /* 自动类型转换 */
  // char ch;
  // int i;
  // float fl;
  // fl = i = ch = 'C';

  // printf("ch = %c,i=%d,fl=%2.2f\n", ch, i, fl);

  // ch = ch + 1;
  // i = fl + 2 * ch;
  // fl = 2.0 * ch + i;

  // printf("ch = %c,i=%d,fl=%2.2f\n", ch, i, fl);

  // ch = 1107;
  // printf("Now ch = %c\n", ch);

  // ch = 80.89;
  // printf("Now ch = %c\n", ch);

  int mice;
  mice = 1.6 + 1.7;
  printf("mice = %d\n", mice);

  mice = (int)1.6 + (int)1.7;
  printf("mice = %d\n", mice);

  return 0;
}