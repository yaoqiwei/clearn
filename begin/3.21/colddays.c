#include <stdio.h>
#include <ctype.h>
#define SPACE ' '
#define PERIOD '.'

int main(void)
{
  // const int FREEZING = 0;
  // float temperature;
  // int cold_days = 0;
  // int all_days = 0;
  // printf("Enter the list of daily low temperatures.\n");
  // printf("Use Calsius,and enter q to quit.\n");

  // while (scanf("%f", &temperature) == 1)
  // {
  //   all_days++;
  //   if (temperature < FREEZING)
  //     cold_days++;
  // }
  // if (all_days != 0)
  //   printf("%d days total: %.1f%% were below freezing.\n",
  //          all_days, 100.0 * (float)cold_days / all_days);
  // if (all_days == 0)
  //   printf("No data entered!\n");

  /* 更改输入，空格不变 */
  // char ch;
  // ch = getchar();
  // while (ch != '\n')
  // {
  //   if (ch == SPACE)
  //     putchar(ch);
  //   else
  //     putchar(ch + 1);
  //   ch = getchar();
  // }
  // putchar(ch);

  // char ch;
  // while ((ch = getchar()) != '\n')
  // {
  //   if (isalpha(ch))
  //     putchar(ch + 1);
  //   else
  //     putchar(ch);
  // }

  /* 使用逻辑与运算符 */
  char ch;
  int charcount = 0;
  while ((ch = getchar()) != PERIOD)
  {
    if (ch != '"' && ch != '\'')
    {
      charcount++;
    }
  }
  printf("There are %d non-quote characters.\n", charcount);

  return 0;
}