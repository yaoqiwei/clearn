#include <stdio.h>
#define ADJUST 7.31
#define SQUARES 64

int main(void)
{
  // const double Scale = 0.333;
  // double shoe, foot;
  // shoe = 9.0;
  // foot = Scale * shoe + ADJUST;
  // printf("Shoe size (men's) foot length\n");
  // printf("%10.1f %15.2f inches\n", shoe, foot);

  /*计算多个不同鞋码对应的脚长*/
  // const double SCALE = 0.333;
  // double shoe, foot;
  // printf("Shoe size (men's) foot length\n");
  // shoe = 3.0;
  // while (shoe < 18.5) // while循环开始
  // {
  //   foot = SCALE * shoe + ADJUST;
  //   printf("%10.1f %15.2f inches\n", shoe, foot);
  //   shoe++;
  // }
  // printf("If the shoe fits,wear it.\n");

  // int ex, why, zee;
  // const int TWO = 2;
  // why = 42;
  // zee = TWO;
  // ex = TWO * (why + zee);
  // printf(" %d\n", ex);

  // int jane, tarzan, cheeta;
  // cheeta = tarzan = jane = 68;
  // printf("                 cheeta tarzan jane\n");
  // printf("First round score %4d %8d %8d\n", cheeta, tarzan,
  //        jane);

  /* 计算平方表*/
  // int num = 1;
  // while (num < 21)
  // {
  //   printf("%4d%6d\n", num, num * num);
  //   num++;
  // }

  /*指数爆炸*/
  // const double CROP = 2E16; // 世界小麦年产谷粒数
  // double current, total;
  // int count = 1;
  // printf("square grains total    ");
  // printf("fraction of \n");
  // printf("          added      grains  ");
  // printf("world total\n");
  // total = current = 1.0;
  // printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
  // while (count < SQUARES)
  // {
  //   count++;
  //   current = 2.0 * current;
  //   total = total + current;
  //   printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / CROP);
  // }
  // printf("That's all.\n");

  /* 除法 */
  // printf("integer division: 5/4 is %d \n", 5 / 4);
  // printf("integer division: 6/3 is %d \n", 6 / 3);
  // printf("integer division: 7/4 is %d \n", 7 / 4);
  // printf("floating division: 7./4. is %1.2f \n", 7. / 4.);
  // printf("mixed division: 7./4 is %1.2f \n", 7. / 4);

  int top, score;
  top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
  printf("top = %d,score = %d\n", top, score);

  return 0;
}