#include <stdio.h>
#define SEC_PER_MIN 60
#define MAX 100

int main(void)
{
  // int n = 0;
  // size_t intsize;
  // intsize = sizeof(int);
  // printf("n = %d,n has %zd bytes; all ints hava %zd bytes.\n", n, sizeof n, intsize);

  // int see, min, left;
  // printf("Convert seconds to minutes and seconds!\n");
  // printf("Enter the number of seconds (<=0 to quit)\n");
  // scanf("%d", &see); // 读取秒数
  // while (see > 0)
  // {
  //   min = see / SEC_PER_MIN;  // 截取分钟数
  //   left = see % SEC_PER_MIN; // 剩下的秒数
  //   printf("%d seconds is %d minutes, %d seconds.\n", see, min, left);
  //   printf("Enter next value (<=0 to quit)\n");
  //   scanf("%d", &see);
  // }
  // printf("Done!\n");

  // int ultra = 0, super = 0;
  // while (super < 5)
  // {
  //   super++;
  //   ++ultra;
  //   printf("super = %d ,ultra = %d \n", super, ultra);
  // }

  // int a = 1, b = 1;
  // int a_post, pre_b;
  // a_post = 2 * a++;
  // pre_b = 2 * ++b;
  // printf("a a_post  b pre_b \n");
  // printf("%1d %5d %5d %5d\n", a, a_post, b, pre_b);

  // int count = MAX + 1;
  // while (--count > 0)
  // {
  //   printf("%d bottles of spring water on the well, "
  //          "%d bottles of spring water!\n",
  //          count, count);
  //   printf("Take one down and pass it around,\n");
  // }

  // int n = 3;
  // int y = 0;
  // y = n++ + n++;
  // printf("n = %d\n", y);

  int num = 4;
  int ans;
  ans = num / 2 + 5 * (1 + num++);
  printf("%10d %10d\n", num, num * num++);
  printf("%d \n", ans);

  return 0;
}