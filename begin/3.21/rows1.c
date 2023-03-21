#include <stdio.h>
#define ROWS 6
#define CHARS 6
#define SIZE 10
#define PAR 72

int main(void)
{
  // int row;
  // char ch;
  // for (row = 0; row < CHARS; row++)
  // {
  //   for (ch = 'A'; ch < ('A' + CHARS); ch++)
  //     printf("%c", ch);
  //   printf("\n");
  // }

  /* 依赖外部循环的嵌套循环 */
  // int row;
  // char ch;
  // for (row = 0; row < ROWS; row++)
  // {
  //   for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
  //     printf("%c", ch);
  //   printf("\n");
  // }

  /* 使用循环处理数组 */
  int index, score[SIZE];
  int sum = 0;
  float average;
  printf("Enter %d golf scores:\n", SIZE);
  for (index = 0; index < SIZE; index++)
    scanf("%d", &score[index]);
  printf("The scores read in are as follows:\n");
  for (index = 0; index < SIZE; index++)
    printf("%5d", score[index]);
  printf("\n");
  for (index = 0; index < SIZE; index++)
    sum += score[index];
  average = (float)sum / SIZE;
  printf("Sum of scores = %d, average = %.2f\n", sum,
         average);
  printf("That's a handicap of %.0f.\n", average - PAR);

  return 0;
}